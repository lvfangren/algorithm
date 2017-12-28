# include<iostream>
using namespace std;
long long fun(int n)
{
	long long arr[52];
	arr[0]=0;
	arr[1]=1;
	arr[2]=2;
	if(n>2)
	{
		for(int i=3;i<=n;i++)
		{
			arr[i]=arr[i-1]+arr[i-2];
		}
	}
	return arr[n];
	
}
int main()
{
	int n,a,b;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		cout<<fun(b-a)<<endl;
	}	
	return 0;
}
