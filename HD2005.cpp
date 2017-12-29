# include<stdio.h>
int main()
{
	int year,mouth,day,sum=0;
	int run[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int fei[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d/%d/%d",&year,&mouth,&day) != EOF)
	{
		if((year%4==0&&year%100!=0)||year%400==0)
		{
			for(int i=0;i<mouth;i++)
				sum+=run[i];
			printf("%d\n",sum+day);
			sum=0;
		}
		else
		{
			for(int i=0;i<mouth;i++)
				sum+=fei[i];	
			printf("%d\n",sum+day);
			sum=0;
		}
	}
	return 0;
}

