# include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m&&(n||m))
	{
		bool flag=false;
		for(int i=-10000;i<=10000;i++)
		{
			if(i*(n-i)==m)
			{
				flag=true;
			}
		}
		if(flag)
		{
			cout<<"Yes\n";
		}
		else
		{
			cout<<"No\n";	
		}
	}
	return 0;
}
