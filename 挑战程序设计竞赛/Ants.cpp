/*��Ŀ��Դ��poj1852 ����cin�����tle
 *	����˼·���տ�ʼȷʵ���뵽ö���������ϵķ�����������ݺܴ����������ų���
 *	���ţ���Ŀ�����������ϵ��䣬�����ҵ����һֻ��������Ͼ����ˡ�		 
 */ 
//# include<bits/stdc++.h>
# include<iostream>
# include<stdio.h>
using namespace std;
# define MAX_N 1000000
int x[MAX_N];
int main()
{
//	freopen("in.txt","r",stdin);
	int L,n;
	int N;
//	cin>>N;
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d %d",&L,&n);	
			for(int i=0;i<n;i++)
				scanf("%d",&x[i]);
//				cin>>x[i];
		int minTime=0,maxTime=0;
		for(int i=0;i<n;i++)
		{
			minTime=max(minTime,min(x[i],L-x[i]));	
			maxTime=max(maxTime,max(x[i],L-x[i]));
		}
//		cout<<minTime<<" "<<maxTime<<endl;	
		printf("%d %d\n",minTime,maxTime);
	}	
//	fclose(stdin); 
	return 0;
}
