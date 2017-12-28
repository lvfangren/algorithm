# include<stdio.h>
int main()
{
	int n;
	float result=0,score[100],min,max;
	while(scanf("%d",&n)!= EOF &&(n>2&&n<=100))
	{
		for(int i=0; i<n; i++)
		{
			scanf("%f",&score[i]);
			result+=score[i];
		}
		min=score[0];
		max=score[0];
		for(int i = 1; i < n; i++)
		{
			if(score[i] > max)
			{
				max=score[i];
			}
			if(score[i] < min)
			{
				min=score[i];
			}
		}
		printf("%.2f\n",(result-max-min)/(n-2));
		result=0;
	}
	return 0;
}
