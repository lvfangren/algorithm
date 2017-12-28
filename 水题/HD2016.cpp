# include<iostream>
using namespace std;
int main()
{
	int n,a[102];
	while(cin>>n&&n<100&&n)
	{
		int min=10,flag;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<min)
			{
				min=a[i];
				flag=i;
			}
		}
		if(flag!=0)
		{
			int temp=0;
			temp=a[0];
			a[0]=min;
			a[flag]=temp;
		}
		cout<<a[0];
		for(int j=1;j<n;j++)
		{
			cout<<" "<<a[j];
		}
		cout<<endl;
	}
	return 0;
}
