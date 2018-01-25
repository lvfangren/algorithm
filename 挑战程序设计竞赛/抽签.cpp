# include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		int *a=new int[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool flag=false; 
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				for(int k=0;k<n;k++)
					for(int z=0;z<n;z++)
					{
						if((a[i]+a[j]+a[k]+a[z])==m)
						{
							flag=true; 
						}			
					}
						if(flag)
						{
							puts("Yes");
						}else
						{
							puts("No");
						}	
	}
	return 0;
}
