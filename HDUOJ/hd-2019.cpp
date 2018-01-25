# include<iostream>

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
		cin>>arr[n];
		
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<arr[n]<<"\n";		
	}
	return 0;
}
