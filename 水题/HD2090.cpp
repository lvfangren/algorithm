# include<stdio.h>
char s[100];
int main()
{
	double num,money;
	double sum=0;
	while(scanf("%s %lf %lf",s,&num,&money)!=EOF)
	{
		sum+=num*money;
	}
	printf("%.1lf\n",sum);
	return 0;
}
