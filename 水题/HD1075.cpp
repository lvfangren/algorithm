# include<iostream>
# include<cstring>
# include<map>
using namespace std;
typedef map<string,string>pam;
pam m;
pam::iterator ite;
int main()
{
//	freopen("in.txt","r",stdin);
	char s1[100000],s2[100000];
	for(int i=0;i<2;i++)
	{
		char str[100000];	
		if(i==0)
		{
			cin>>str;
			if(strcmp(str,"START") == 0)
			{
				while(cin>>s1)
				{
					if(strcmp(s1,"END")==0)
					{
						break;
					}else
					{
						cin>>s2;
						m[s2]=s1;
					}
				}
			}
//			for(ite=m.begin();ite!=m.end();ite++)
//				cout<<ite->first<<"\t"<<ite->second<<endl;
		}
		else if(i==1)
		{
			cin>>str;
			if(strcmp(str,"START")==0)
			{
				while(gets(s1))
				{
					if(strcmp(s1,"END")==0)
					{
						break;
					}else
					{
						int len=strlen(s1);
						int flag=2;
						string temp;
						for(int i=0;i<len;i++)
						{
							while(s1[i]>='a'&&s1[i]<='z')
							{
								temp+=s1[i];
								flag=1;
								i++;
							}
							if(flag==1)
							{
								if(m.count(temp))
								{
									ite=m.find(temp);
									cout<<ite->second;
								}else
								{
									cout<<temp;
								}
								flag=0;
								temp.clear();
							}
							cout<<s1[i];
						}
						if(flag==0||flag==1)
							cout<<endl;	
					}
					
				}
			}
		}
		
	}
//	fclose(stdin);	
	return 0;
}

//	string  str,s1,s2;
//	cin>>str;
//	if(str=="START")
//	{
//		while(cin>>s1>>s2)
//		{
//			if(s1=="END")
//				break;
//			m[s2]=s1;	
//		}
//		string ai;
//		cin>>str;
//		if(str=="START")
//		{
//			while(getline(cin,ai)&&ai!="END")
//			{
//				;	
//			}
//			cout<<ai<<endl;	
//		}	
//		pam::iterator ite;
//		for(ite=m.begin();ite!=m.end();ite++)
//		{
//			cout<<ite->first<<"\t"<<ite->second<<endl;	
//		}	
//	}
