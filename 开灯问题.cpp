# include<stdio.h>
# include<string.h>
# define MAX 1000+10
int a[MAX];
int main()
{
	int flag=1,n,k;
	memset(a,0,sizeof(a));
	scanf("%d %d",&n,&k);
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j%i==0)
			{
				a[j]=!a[j];
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]){
			
			if(flag)
			{
				flag=0;
			}else
			{
				printf(" ");
			}
			printf("%d",i);
		}
	}
	printf("\n");
	return 0;
}
