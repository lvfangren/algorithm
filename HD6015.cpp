# include<iostream>
# include<map>
# include<algorithm>
using namespace std;
typedef long long ll;
struct node{
	char className[15];
	int value;
}cas[105];
bool desc(node a,node b)
{
	return a.value>b.value;
}
int main()
{
	int n,m;
	cin>>n;
	while(n--)
	{
		cin>>m;
		map<string,int> pam;
		for(int i=0;i<m;i++)
		{
			cin>>cas[i].className>>cas[i].value;
		}
		pam.clear();
		sort(cas,cas+m,desc);
		ll result=0;
		for(int i=0;i<m;i++)
		{
			if(pam[cas[i].className]==2)
				continue;
			else
				pam[cas[i].className]++,result+=cas[i].value;				
		}
		cout<<result<<endl;
	}
	return 0;
}
