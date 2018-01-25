# include<iostream>
using namespace std;
int main()
{
	int i;
	while(cin>>i)
	{
		int sum=0;
		for(int x=0;x<=i;x++)
		{
			sum+=x;
		}
		cout<<sum<<"\n"<<endl;
	}
	return 0;
}
