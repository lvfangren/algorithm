# include<iostream>
# include<string.h>
using namespace std;
int main()
{
	char s[102];	
	while(gets(s))
	{
		int x=strlen(s);
		for(int i=0;i<x;i++)
		{
			if(s[0]>='a'&&s[0]<='z')
			{
				s[0]-=32;	
			}
			if(i!=0)
			{
				if(s[i-1]==' '&&s[i]!=' '&&(s[i]>='a'&&s[i]<='z'))
				{
					s[i]-=32;	
				}	
			}	
		}
		cout<<s<<endl;
	}
	
	return 0;
}
