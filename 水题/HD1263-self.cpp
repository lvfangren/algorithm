# include<iostream>
# include<stdio.h>
# include<map>
using namespace std;
typedef map<string,map<string,int> >mmp;
typedef map<string,int>mp;
mmp p;
int main()
{
//	freopen("in.txt","r",stdin);
	int n,m;
	string s1,s2;
	int num;
	cin>>n;
	while(n--)
	{
		p.clear();
		
		cin>>m;
		while(m--)
		{
			cin>>s1>>s2>>num;
			p[s2][s1]+=num;
		}	
		mmp::iterator iter1;
		mp::iterator iter2;
		for(iter1 = p.begin(); iter1!= p.end();iter1++)
		{
            cout<<iter1->first<<endl;
            for(iter2 = iter1->second.begin();iter2 != iter1->second.end();iter2++)
			{
                cout<<"   |----"<<iter2->first<<"("<<iter2->second<<")"<<endl;
			}
       }
		if(m)
		{
			cout<<endl;
		}
	}
//	fclose(stdin);	
	return 0;
}
