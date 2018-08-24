# include<cstring>
# include<vector>
# include<iostream>
using namespace std;
typedef vector<int> vi;
bool all_same(vi v)
{
	for(int i=0;i<v.size()-1;i++)
		if(v[i]!=v[i+1])
			return false;
	return true;		
}
int main()
{
	vi v;
	int i;
	while(cin>>i)
		v.push_back(i);
	cout<<all_same(v);	
	return 0;
}
