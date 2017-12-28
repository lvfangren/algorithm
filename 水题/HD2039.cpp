# include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
		float a,b,c;
		while(n--)
		{
			cin>>a>>b>>c;
			if((a+b>c)&&(a+c>b)&&(b+c>a))
			{
					cout<<"YES\n";
			}else
			{
				cout<<"NO\n";
			}
		}
	return 0;
}
