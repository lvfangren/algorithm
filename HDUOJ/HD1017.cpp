# include<iostream>
using namespace std;
int main()
{
	int N,n,m;
	cin>>N;
	while(N--)
	{
		int k=1;
		while(cin>>n>>m&&(n||m))
		{
			int count=0;
			for(int i=1;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if((i*i+j*j+m)%(i*j)==0)
					{
						count++;
					}
				}
			}
			cout<<"Case "<<k++<<": "<<count<<endl;
		}
		if(N!=0)
		{
			cout<<endl;
		}
	}
	return 0;
}
