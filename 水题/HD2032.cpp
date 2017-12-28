#include <iostream>
using namespace std;
int main()
{
 	int i,n,a[100][100];
	while(cin>>n&&n)
	{
		for(i=1;i<=n;i++)
		{ 
			a[i][1]=1;
			a[i][i]=i;
		}
		cout<<1<<endl;
	}
	return 0;
} 
