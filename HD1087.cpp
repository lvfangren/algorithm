# include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
int a[maxn],dp[maxn];
int max(int one,int two)
{
	return one>=two?one:two;
}
int main()
{
	int n;
	while(~scanf("%d",&n)&&n)
	{
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		int result=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[i]>a[j])
				{
					dp[i]=max(dp[i],dp[j]+a[i]);	
					if(dp[i]>result)
						result=dp[i];
				}
					
			}				
		}
		cout<<result<<endl;
	}
	return 0;
}
