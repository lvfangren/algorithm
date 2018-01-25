# include<iostream>
using namespace std;
int main()
{
	int n,a[31]={3},x;
	while(cin>>n&&n)
	{
		while(n--)
		{
			cin>>x;
			for(int i=1;i<31;i++)
			{
				a[i]=2*(a[i-1]-1);
			}
			cout<<a[x]<<endl;
		}
		
	}
	return 0;
}
