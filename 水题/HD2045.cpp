# include<iostream>
using namespace std;
int main()
{
	int n;
	long long a[53]={0,3,6,6};
	for(int i=4;i<=50;i++)
	{
		a[i]=a[i-1]+a[i-2]*2;
	}
	while(cin>>n&&n)
	{
		cout<<a[n]<<endl;
	}
	return 0;
}
