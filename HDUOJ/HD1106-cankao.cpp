# include<iostream>
# include<sstream>
# include<string>
# include<algorithm>
# include<vector>
using namespace std;
int main()
{
//	freopen("in.txt","r",stdin);
	string str;
	while(getline(cin,str))
	{
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='5')
				str[i]=' ';
		}
		int t;
		vector<int>list;
		istringstream sin(str);
		while(sin>>t)
		{
			list.push_back(t);
//			list[t];	
		} 
		sort(list.begin(),list.end());
		for(vector<int>::iterator it=list.begin();it!=list.end();it++)
		{
			if(it!=list.end()-1)
				cout<<*it<<" ";
			else
				cout<<*it<<endl;		
		}
	}
//	fclose(stdin);
	return 0;
}
