# include<iostream>
# include<map>
using namespace std;
typedef map<int,int> pam;
pam mx;
int main()
{
//	freopen("in.txt","r",stdin);
	int n,m;
	int a,b;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		while(n--)
		{
			cin>>a;
			mx[a]++;
		}
		while(m--)
		{
			cin>>b;	
			mx[b]++;
		}
		pam::iterator ite;
		for(ite=mx.begin();ite!=mx.end();ite++)
		{
			if(ite==mx.begin())
				cout<<ite->first;
			else
				cout<<" "<<ite->first;	
		}
		cout<<endl;
		mx.clear();	
	}
//	fclose(stdin);
	return 0;
}
