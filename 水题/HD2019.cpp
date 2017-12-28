# include<iostream>
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
	int n,m,arr[102];
	while(cin>>n>>m&&(n||m)&&n<=100)
	{
		for(int i=0;i<n;i++)
			cin>>arr[i];
		arr[n]=m;
		for(int x=0;x<n+1;x++)
			for(int y=x+1;y<n+1;y++)
			{
				if(arr[x]>arr[y])
					swap(arr[x],arr[y]);
			}
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<arr[n]<<"\n";		
	}
	return 0;
}
