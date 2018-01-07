//dp问题，没搞懂我的为什么re了 
//# include<bits/stdc++.h>
//using namespace std;
////int result(int n,int x,int y)
////{
////	if(x==n)
////		return a[x][y];
////	else
////		return max(result(n,x+1,y),result(n,x+1,y+1))+a[x][y]; 	
////}
//int main()
//{
////	freopen("in.txt","r",stdin);
//	int c,n;
//	int a[105][105],result[105][105];
//	cin>>c;
//	while(c--)
//	{
//		cin>>n;
//		for(int i=1;i<=n;i++)
//		{
//			for(int j=1;j<=i;i++)
//			{
//				cin>>a[i][j];
//			}
//		}
//		memset(result,0,sizeof(result));
//		for(int i=1;i<=n;i++)
//			result[n][i]=a[n][i];
//		for(int i=n-1;i>=1;i--)
//		{
//			for(int j=1;j<=i;j++)
//				result[i][j]=max(result[i+1][j],result[i+1][j+1])+a[i][j];	
//		}			
//		cout<<result[1][1]<<endl;
//	}
////	fclose(stdin);
//	return 0;
//	
//}
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
	int c;
	scanf("%d",&c);
	while(c--)
	{
		int n,a[101][101];
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=n;i>=2;i--)
		{
			for(int j=1;j<i;j++)
			{
				a[i-1][j]+=max(a[i][j],a[i][j+1]);
			}
		}
		printf("%d\n",a[1][1]);
	}
	return 0; 
}
