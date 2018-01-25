# include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int *a=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		bool flag=false;
		for(int i=n-1;i>0;i--)
		{
			for(int j=i-1;j>0;j--)
			{
				for(int k=j-1;k>0;k--)
				{
					if((a[k]+a[j]>a[i])&&(a[k]+a[i]>a[j])&&(a[i]+a[j]>a[k]))
					{
						cout<<a[k]+a[i]+a[j]<<endl;
						flag=true;	
						break;
					}else
					{
						continue;
					}
				}	
				if(flag)
				{
					break;	
				}	
			}
			if(flag)
			{
				break;	
			}		
		}	
		if(!flag)
		{
			cout<<0<<endl;
		}	
//		cout<<sum<<endl;
	}
	return 0;
}
