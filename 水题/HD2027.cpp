# include<iostream>
# include<cstdio>
# include<cstring>
using namespace std;
int main()
{
	int n;
	char a[110];
	while(cin>>n)
	{
		getchar();
		while(n--)
		{
			int A=0,E=0,I=0,O=0,U=0;
			gets(a);
			for(int i=0;i<100;i++)
			{
				if(a[i]=='a')
				{
					++A;	
				}
				if(a[i]=='e')
				{
					++E;	
				}
				if(a[i]=='i')
				{
					++I;	
				}
				if(a[i]=='o')
				{
					++O;	
				}
				if(a[i]=='u')
				{
					++U;	
				}
			}
			cout<<"a:"<<A<<endl;
			cout<<"e:"<<E<<endl;
			cout<<"i:"<<I<<endl;
			cout<<"o:"<<O<<endl;
			cout<<"u:"<<U<<endl;
			if(n!=0)
			{
				cout<<endl;
			}
		}
		
	}
}
