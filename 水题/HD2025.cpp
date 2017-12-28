# include<iostream>
using namespace std;
int main()
{
	string s;
	char max;
	while(cin>>s)
	{
		max=s[0];
		for(int i=0;s[i]!='\0';i++)
		{
			if(s[i]>=max)
			{
				max=s[i];
			}	
		}
		for(int i=0;s[i]!='\0';i++)
		{
			if(s[i]==max)
			{
				cout<<s[i]<<"(max)";
			}else
			{
				cout<<s[i];	
			}	
		}
		cout<<endl;
		
	}
//	cout<<<<endl;
	return 0;
}
