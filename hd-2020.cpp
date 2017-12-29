# include<iostream>
# include<math.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n,a[102];
	while(cin>>n&&n!=0&&n<=100)
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[j])>abs(a[i]))
					swap(&a[j],&a[i]);
			}
		for(int i=0;i<n-1;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<a[n-1]<<"\n";
	}
	return 0;
}
