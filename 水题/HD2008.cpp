# include<stdio.h>
int main()
{
	int n,a,b,c;
	float x;
	while(scanf("%d",&n)&&n!=0)
	{
		a=b=c=0;
		while(n--)
	{
		scanf("%f",&x);		
		if(x<0)
			a++;
		if(x==0)
			b++;
		if(x>0)
			c++;				
	}
		printf("%d %d %d\n",a,b,c);
	}
	return 0;
}
