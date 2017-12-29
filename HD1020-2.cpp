# include<iostream>
using namespace std;
int main()
{
//	freopen("in.txt","r",stdin);
	int i,c,t;
	char s[10001];
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		gets(s);
		for(i=0;s[i];i++)
		{
			c=1;
			while(s[i]==s[i+1])
				c++,i++;
			if(c!=1)printf("%d%c",c,s[i]);
			else printf("%c",s[i]);
		}
		puts("");
	}	
//	fclose(stdin);
	return 0;
}
