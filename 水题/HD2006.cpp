//# include<stdio.h>
//int main()
//{
//	int x,a[100],result=1;
//	scanf("%d",&x);
//	for(int i=0;i<x;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<x;i++)
//	{
//		if(a[i]%2!=0)
//			result*=a[i];	
//	}
//	printf("%d\n",result);
//	return 0;
//}
# include<iostream>
using namespace std;
int main()
{
	int n,sum=1;
	while(cin>>n)
	{
		
		int *p=new int[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&p[i]);
			if(p[i]%2!=0)
				sum*=p[i];	
		}
		cout<<sum<<endl;
		sum=1;	
		delete []p;
	}
	
	return 0;
}
