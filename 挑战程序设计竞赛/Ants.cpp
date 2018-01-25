/*题目来源：poj1852 ，用cin输入会tle
 *	解题思路：刚开始确实会想到枚举所有蚂蚁的方向但是如果数据很大，所以立马排除。
 *	接着，题目是求所有蚂蚁掉落，所以找到最后一只掉落的蚂蚁就行了。		 
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
