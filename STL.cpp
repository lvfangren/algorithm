# include<iostream>
//# include<string>
# include<map>
using namespace std;
int main()
{
	typedef map<string,int> mtmap;
	mtmap a;
	a["A"]=0;
	a["C"]=2;
	a["B"]=1;
	mtmap::iterator iter;
	for(iter=a.begin();iter!=a.end();iter++)
	{
		cout<<iter->first<<"\t"<<iter->second<<endl;
	}
	printf("\n");
	a["A"]=1;
	for(iter=a.begin();iter!=a.end();iter++)
	{
		cout<<iter->first<<"\t"<<iter->second<<endl;
	}
	cout<<endl;
	a.insert(pair<string,int>("B",0));
	for(iter=a.begin();iter!=a.end();iter++)
	{
		cout<<iter->first<<"\t"<<iter->second<<endl;
	}
	return 0;
}
