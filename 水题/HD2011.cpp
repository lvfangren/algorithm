# include<stdio.h>
# include<math.h>
int main()
{
	int m,n;
	double result=0;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&n);
		for(int j=1;j<=n;j++)
		{
			result+=pow(-1,j+1)*(1/(double)j);
		}
		printf("%.2lf\n",result);
		result=0;
	}
	return 0;
}
