# include<iostream>
using namespace std;
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	string a,b,sum;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>a>>b;
		cout<<"Case "<<i<<":\n";
		cout<<a<<" + "<<b<<" = ";
		int al=a.length();
		int bl=b.length();
		int suml=max(al,bl)+1;
		for(int i=al-1;i<=suml;i++)
		{
			a[i]='0'+a[i];
			cout<<a[i];
		}	
			
				
	}
	return 0;
}
