# include<iostream>
# include<map>
using namespace std;
typedef map<int,int> pam;
pam m;
void show(int x,int y)
{
	for(int i=0;i<y;i++)
	{
		cout<<'>';
		for(int j=0;j<=x-1;j++)
		{
			if(j==0||j==x-1)
				cout<<'+';
			else
				cout<<'-';	
		}
		cout<<'>'<<endl;
	}
	cout<<endl;
}
int main()
{
	int t,n;
	int a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		while(n--)
		{
			cin>>a>>b;
			m[a]=b;
		}
		pam::iterator ite;
		for(ite=m.begin();ite!=m.end();ite++)
		{
			show(ite->first,ite->second);
		}
	}
	return 0;
}
