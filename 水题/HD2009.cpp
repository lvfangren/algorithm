# include<stdio.h>
# include<math.h>
int main()
{
	double m,n;
	while(scanf("%lf%lf",&m,&n) != EOF)
	{
		double result=m;
		for(int i=1;i<n;i++)
		{
			result+=sqrt(m);
			m=sqrt(m);	
		}
		printf("%1.2lf\n",result);
	}
	return 0;
}
