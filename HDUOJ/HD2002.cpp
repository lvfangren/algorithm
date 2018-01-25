# include<stdio.h>
# include<math.h>
# define PI 3.1415927
int main()
{
	double x;
	while(scanf("%lf",&x) != EOF)
	{
		printf("%.3lf\n",(4*PI*pow(x,3))/3);
	}
	return 0;
}
