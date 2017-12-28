# include<iostream>
# include<algorithm>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m&&(n||m))
	{
		int a[102],b[102];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}
		sort(b,b+m);
		int count=0;
		for(int i=0;i<n;i++)
		{
			bool flag=true;
			
			for(int j=0;j<m;j++)
			{
				if(a[i]==b[j])
				{
					flag=false;
					break;	
				}				
			}
			if(flag)
			{
				a[count]=a[i];
				++count;
			}
		}
		if(count==0)
		{
			cout<<"NULL"<<endl;
		}else{
			for(int i=0;i<count;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
