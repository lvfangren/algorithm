# include<iostream>
# include<map>
# include<sstream>
using namespace std;
typedef map<int,int> pam;
pam m;
int main()
{
//	freopen("in.txt","r",stdin);
	string a;
	while(getline(cin,a))
	{
		stringstream stream; 
		string temp;
//		int temp;
		int len=a.length();
		for(int i=0;i<len;i++)
		{
			int cha;
			if(a[i]=='5')
			{
//				temp+=a[i];
				a[i]=' ';
			}
//			else
//			{
//				cout<<temp<<endl;
//				stream<<temp;
//				stream>>cha;
//				cout<<cha<<endl;
//				m[cha]++;			
//				temp="";
//				stream.clear();
//			}
			istringstream stream(a);
			while(stream>>cha)
			{
				m[cha]++;
			}
		}
		pam::iterator iter;
		for(iter=m.begin();iter!=m.end();iter++)
		{
			if(iter==m.begin())	
			{
				cout<<iter->first;
			}else
			{
				cout<<" "<<iter->first;
			}
		}
		cout<<endl;
		m.clear();		
	}
//	fclose(stdin);
	return 0;
}
