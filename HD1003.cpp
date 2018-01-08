//# include<bits/stdc++.h>
//using namespace std;
//const int n=100010;
//int a[n],dp[n];
//int main()
//{
//	freopen("in.txt","r",stdin);
//	int t,N;
//	cin>>t;
//	for(int temp=1;temp<=t;temp++)
//	{
//		cin>>N;
//		for(int i=1;i<=N;i++)
//		{
//			cin>>a[i];
//		}
//		memset(dp,0,sizeof(dp));
//		int sum=0,local=0,length=0;
//		for(int i=1;i<=N;i++)
//		{
//			for(int j=1;j<=i;j++)
//			{
//				dp[i]=max(dp[i]+a[j],a[j]);
//				local=i;
//				if(dp[i]>sum)
//				{
////					++local
//					length=i;
//					sum=dp[i];
//				}
//			}
//		}
//		cout<<"Case "<<temp<<":\n";
//		cout<<sum<<" "<<local<<" "<<length<<endl;
//	}
//	fclose(stdin);
//	return 0;
//}
# include<bits/stdc++.h>
using namespace std;
int a[100010];
int main()
{
//	freopen("in.txt","r",stdin);
	int T,N;
	int t,i;
	cin>>T;
	for(t=0;t<T;t++)
	{
		cin>>N;
		for(i=0;i<N;i++)
		{
			cin>>a[i];
		}
		int maxSum=a[0];
		int sum=0,l=0,r=0;
		int tmpL=0;
		for(i=0;i<N;i++)
		{
			sum+=a[i];
			if(sum>maxSum)
			{
				maxSum=sum;
				l=tmpL;
				r=i;
			}
			if(sum<0)
			{
				sum=0;
				tmpL=i+1;
			}
		}
		cout<<"Case "<<t+1<<":\n";
		cout<<maxSum<<" "<<l+1<<" "<<r+1<<endl;
		if(t<T-1)
		{
			cout<<endl;	
		}		
	}
//	fclose(stdin);
	return 0;
}
