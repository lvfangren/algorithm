# include<iostream>
using namespace std;
int main()
{
	int n,m,a[]={100,50,10,5,2,1};
	while(cin>>n&&n&&n<100)
	{
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			for(int j=0;j<6;j++)
			{
				count+=m/a[j];
				m%=a[j];
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

