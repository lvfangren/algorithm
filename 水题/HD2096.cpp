# include<stdio.h>
int main()
{
	int n;
	long a,b,sum;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%ld%ld",&a,&b);
		sum=a%100+b%100;
		printf("%d\n",sum%100);
	}
	return 0;
}
