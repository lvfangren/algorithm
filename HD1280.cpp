# include<iostream>
# include<algorithm>
using namespace std;
int main()
{
//	freopen("in.txt","r",stdin);
	int n,m;
	while(cin>>n>>m&&n)
	{
		int *p=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
		}
		int *result=new int[(n*(n-1))/2];
		for(int i=0,a=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				result[a++]=p[i]+p[j];
			}
		}
//		for(int i=0;i<(n*(n-1))/2;i++)
//			cout<<result[i]<<endl;
		sort(result,result+(n*(n-1))/2);
		for(int i=m,j=(n*(n-1)/2-1);i>0;i--,j--)
		{
			if(i==m)
			{
				cout<<result[j];
			}else
			{
				cout<<" "<<result[j];
			}
		}
		cout<<endl;
	}
//	fclose(stdin);
	return 0;
}
