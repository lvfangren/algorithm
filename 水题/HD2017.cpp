#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n)
	{
		while(n--)
		{
			getchar();
			char a;
			int count=0;
			while((a=getchar())!='\n')
			{
				if(a>='0'&&a<='9')
				{
					++count;
				}	
			}
			cout<<count<<endl;		
		}
	}
	return 0;
}
