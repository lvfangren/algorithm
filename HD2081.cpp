# include<iostream>
# include<cstring>
using namespace std;
int main()
{
	int n,result[7]={6};
	string s;
	cin>>n;
		while(n--)
		{
			cin>>s;
			cout<<'6';
			for(int i=6;i<s.length();i++)
			{
				cout<<s[i];
			}
			cout<<endl;
		}
	return 0;
}
