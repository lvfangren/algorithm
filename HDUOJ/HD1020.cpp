# include<iostream>
# include<map>
//��ʱ,��Ϊ�����ר��ˢSTL����⣬����һ���������Ͼ�map�ˡ�ϣ�����Դ�Ϊ�� 
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
