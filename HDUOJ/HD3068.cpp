//manacherÀ„∑® 
# include<iostream>
# include<cstring>
using namespace std;
# define MAXN 110010
char buf[MAXN*2];
int p[MAXN*2];
int main()
{
	memset(p,0,sizeof(p));
	while(scanf("%s",buf)!=EOF)
	{
		int len=strlen(buf);
		for(int i=len;i>=0;i--)
		{
			buf[i+i+2]=buf[i];
			buf[i+i+1]='#';
		}
		buf[0]='*';
		int maxlen=0,id=0;
		for(int i=2;i<2*len+1;++i){  
            if(p[id]+id>i)
				p[i]=min(p[2*id-i],p[id]+id-i);  
            else 
				p[i]=1;  
            while(buf[i-p[i]] == buf[i+p[i]])
				++p[i];  
            if(id+p[id]<i+p[i])
				id=i;  
            if(maxlen<p[i])
				maxlen=p[i];  
        }  
        cout<<maxlen-1<<endl;  
	}
	
	return 0;
}
