# include<iostream>
using namespace std;
int main()
{
	int n,a[55]={0,1,2,3};
	while(cin>>n&&n)
	{
		for(int i=4;i<55;i++)
		{
			a[i]=a[i-3]+a[i-1];
		}
		cout<<a[n]<<endl;
	}
	return 0;
}
