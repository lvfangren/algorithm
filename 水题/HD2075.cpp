# include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n)
	{
		int a,b;
		while(n--)
		{
			cin>>a>>b;
			if(a%b==0)
			{
				cout<<"YES"<<endl;
			}else
			{
				cout<<"NO"<<endl;	
			}	
		}
	}
	return 0;
}
