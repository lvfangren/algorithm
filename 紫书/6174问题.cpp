//# include<iostream>
//using namespace std;
//# define N 1000
//int temp[N];
//int t=0;
//bool judge(int m)
//{
//	int n=m;
//	int max=0,min=0;
//	int a[4];
//	for(int i=0;i<4;i++)
//	{
//		a[i]=n%10;
//		n/=10;
////		cout<<a[i]<<endl;
//	}
//	for(int i=0;i<4;i++)
//	{
//		for(int j=i+1;j<4;j++)
//		{
//			int xxx;
//			if(a[i]>a[j])
//			{
//				xxx=a[j];
//				a[j]=a[i];
//				a[i]=xxx;	
//			}			
//		}
////		cout<<a[i]<<endl;
//	}
//	for(int i=0,j=3;i<4;i++,j--)
//	{
//		min*=10;
//		min+=a[i];
//		max*=10;
//		max+=a[j];
////		cout<<min<<endl;
//	}
//	n=max-min;
////	cout<<m<<"  "<<n<<"  "<<max<<"\t"<<min<<endl;
//	temp[++t]=n;
////	cout<<t<<"\t"<<temp[t]<<endl;
//	if(n==m)
//	{
//		return true;		
//	}
//	else
//	{
//		return false;
//	}
//			
//}
//int main()
//{
//	int n;
//	cin>>n;
//	temp[t]=n;
////	cout<<temp[t]<<endl;
//	while(1)
//	{
//		if(judge(temp[t]))
//		{
//			for(int i=0;i<1000;i++)
//		{
//			if(i==0&&temp[i])
//				cout<<temp[i];	
//			else if(temp[i])
//				cout<<"->"<<temp[i];
//		}
//			cout<<endl;	
//			break;
//		}
//	}
//	return 0;	
//} 
# include<stdio.h>
# include<string.h>
int get_next(int x)
{
	int a,b,n;
	char s[10];
	sprintf(s,"%d",x);
	n=strlen(s);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				char t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	sscanf(s,"%d",&b);
	for(int i=0;i<n/2;i++)
	{
		char t=s[i];
		s[i]=s[n-1-i];
		s[n-1-i]=t;
	}
	sscanf(s,"%d",&a);
	return a-b;
}
int num[2000],count;
int main()
{
	scanf("%d",&num[0]);
	printf("%d",num[0]);
	count=1;
	for(;;)
	{
		num[count]=get_next(num[count-1]);
		printf("-> %d",num[count]);
		int found=0;
		for(int i=0;i<count;i++)
			if(num[i]==num[count])
			{
				found=1;
				break;		
			}
		if(found)
			break;
		count++;				
	}
	printf("\n");
	return 0;
}
