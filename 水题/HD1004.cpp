# include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	char color[1001][16];
	while(cin>>n&&n)
	{
		int count[1001];
		memset(count,0,sizeof(count));
		for(int i=1;i<=n;i++)
		{
			cin>>color[i];
			count[i]=1;
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n-1;j++)
			{
				if(strcmp(color[i],color[j])==0)
				{
					count[i]++;
				}
			}
		}
		int max=0,maxnum=0;
		for(int i=1;i<=n;i++)
		{
			if(count[i]>max)
			{
				max=count[i];
				maxnum=i;
			}
		}
		cout<<color[maxnum]<<endl;
	}
	return 0;
}
