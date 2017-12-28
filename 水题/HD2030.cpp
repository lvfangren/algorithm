//# include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	char a;
//	getchar();
//	cin>>n;
//		while(n--)
//		{
//			int count=0;
//			while((a=getchar())!='\n')
//			{
//				if(a<0)
//				{
//					++count;
//				}
//			}
//				cout<<count/2<<endl;	
//		}
//	return 0;
//}
# include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char a;
		int count=0;
		while((a=getchar())!='\n')
		{
			if(a<0)
			{
				++count;
			}
		}
		printf("%d\n",count/2);
	}
	return 0;
}
