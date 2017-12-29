# include<iostream>
# include<map>
//超时,因为最近在专门刷STL类的题，所以一看到题马上就map了。希望能以此为鉴 
using namespace std;
typedef map<char,int>pam;
pam m;
int main()
{
//	freopen("in.txt","r",stdin);
	int n;
	char a;
	getchar();
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
//			char temp;
			while((a=getchar())!='\n')
			{
				m[a]++;
			}
			pam::iterator iter;
			for(iter=m.begin();iter!=m.end();iter++)
			{
				if(iter->second==1)
					cout<<iter->first;
				else
					cout<<iter->second<<iter->first;	
			}
			cout<<endl;
			m.clear();
		}
	}
//	fclose(stdin);
	return 0;
}
