# include<stdio.h>
int main()
{
	double x;
	while(scanf("%lf",&x) != EOF)
	{
		printf("%.2lf\n",x>0?x:-x);
	}
	return 0;
}
