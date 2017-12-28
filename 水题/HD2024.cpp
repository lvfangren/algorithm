#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		while(n--)
		{
			getchar();
			char a;
			while((a=getchar())!='\n')
			{
				if(!((a>='a'&&a<='a')||(a=='_')))
				{
					cout<<"no\n";
				}	
			}
		}
	}
	return 0;
}
