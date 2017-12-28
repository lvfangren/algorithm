# include<iostream>
# include<map>
# include<string>
using namespace std;
typedef map<string,int> pam;
pam m;
int main()
{
	string str;
	while(getline(cin,str)&&str!="#")
	{
		m.clear();
		int len=str.length();
		string s;
		int flag=0;
		for(int i=0;i<len;i++)
		{
			s.clear();
			while(str[i]>='a'&&str[i]<='z')
			{
				flag=1;
				s+=str[i];
				i++;
			}
//			cout<<s<<endl;
			if(flag)
			{
				m[s]++;
				flag=0;
			}
		}
		cout<<m.size()<<endl;
	}
	return 0;
}
// #include<map>  
//    #include<string>  
//    #include<algorithm>  
//    #include<iostream>  
//    using namespace std;  
//    int main()  
//    {  
//        int i;  
//        string s;  
//        map<string,int>m;  
//        while(getline(cin,s)&&s!="#")  
//        {  
//            int sign=0;  
//            string str;  
//            m.clear();  
//            int len=s.length();  
//            for(i=0;i<len;i++)  
//            {  
//                str.clear();  
//                while(s[i]>='a'&&str[i]<='z')  
//                {  
//                    str+=s[i];  
//                    i++;  
//                    sign=1;  
//                }  
//                if(sign)  
//                {  
//                    m[str]++;  
//                    sign=0;  
//                }  
//            }  
//            int ans=m.size();//映射值m的总个数，即对应的键值(不同的单词数)的个数   
//            cout<<ans<<endl;  
//        }  
//        return 0;  
//    }  
