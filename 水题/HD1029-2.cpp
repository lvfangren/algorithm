# include<iostream>
# include<algorithm>
using namespace std;
int a[999999];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
//			cin>>a[i];
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
//		cout<<a[(n/2)+1]<<endl;
		printf("%d\n",a[(n/2)+1]);
	}
	return 0;
}
