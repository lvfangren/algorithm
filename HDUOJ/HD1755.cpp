# include<bits/stdc++.h>
using namespace std;
int result[1000000];
int main()
{
//	freopen("in.txt","r",stdin);
	int N,M;
	int x,k;
	while(scanf("%d %d",&N,&M)!=EOF&&(N||M))
	{
		int *p=new int[N];
		for(int i=0;i<N;i++)
		{
			cin>>p[i];	
		}
		sort(p,p+N);
		int j=0;
//�Լ�����ʱ��û���뵽��STL�е�next_permutation�����ҵ������С��Χ������ѯ�ʵ�ʱ��������ˣ���ȫ��none		
		do{
			if(p[0])
			{
				int temp=0;
				for(int i=0;i<N;i++)
				{
					temp=temp*10+p[i];
				}
				result[j++]=temp;
			}
		}while(next_permutation(p,p+N));
		while(M--)
		{
			scanf("%d %d",&x,&k);
			int flag=0;
			for(int i=0;i<j;i++)
			{
//				cout<<x<<"\t"<<k<<endl;
//				cout<<i<<"\t"<<x<<endl;
				if((result[i]+x)%k==0)
				{
//					cout<<x+i<<endl;
					flag=result[i];
					break;	
				}	
			}
			if(flag)
			{
				cout<<flag<<endl;
			}else
			{
				cout<<"None\n";	
			}
		}
	}
//	fclose(stdin);
	return 0;
}
