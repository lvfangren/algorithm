# include<stdio.h>
int main()
{
	int n,m,count=0;
	float result;
	while(scanf("%d%d",&n,&m)!=EOF&&n<=100)
	{
		for(int i=0,x=2;i<n;i++,x+=2)
		{
			result+=x;
			++count;
			if((i+1)%m==0)
			{
				printf("%.0f ",result/m);	
				count=0;
				result=0;
			}
		}
		if(n%m!=0)
			printf("%.0f ",result/(n%m));
		result=0;
		printf("\n");
	}
	return 0;
}
