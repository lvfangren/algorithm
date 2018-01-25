# include<iostream>
using namespace std;
int main()
{
	int n,a[41],m;
	a[0]=0;
	a[1]=0;
	a[2]=1;
	a[3]=2;
	cin>>n;
	while(n--)
	{
		cin>>m;
		for(int i=4;i<41;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		cout<<a[m]<<endl;
	}
	return 0;
}
