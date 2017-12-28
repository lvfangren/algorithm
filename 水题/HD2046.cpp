# include<iostream>
using namespace std;
int main()
{
	int n;
	long long arr[52]={0,1,2,3};
	while(cin>>n)
	{
		for(int i=4;i<=n;i++)
		{
			arr[i]=arr[i-1]+arr[i-2];
		}
		cout<<arr[n]<<endl;
	}
	return 0;
}
