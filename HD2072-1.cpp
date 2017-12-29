# include<iostream>
# include<string>
# include<map>
# include<algorithm>
using namespace std;
typedef map<string,int> pam;
pam nn;
int main()
{
	string a;
//	getchar();
	while(getline(cin,a)&&a!="#")
	{
		if(a!=" ")
			nn[a]++;
	}
	pam::iterator ite;
	for(ite=nn.begin();ite!=nn.end();ite++)
	{
		cout<<ite->first<<"\t"<<ite->second<<endl;
	}
	return 0;
}
