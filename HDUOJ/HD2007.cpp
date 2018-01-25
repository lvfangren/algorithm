# include<stdio.h>
# include<math.h>
//using namespace std;
int main()
{
	int m,n,x=0,y=0;
	while(scanf("%d%d",&m,&n)!= EOF)
	{
		if(m<n)
		{
					for(int i=m;i<=n;i++)
						{
							if(i%2==0)
								x+=pow(i,2);
							else
								y+=pow(i,3);
						}
				printf("%d %d\n",x,y);
				x=0;
				y=0;
		}
		else
		{
				for(int i=n;i<=m;i++)
						{
							if(i%2==0)
								x+=pow(i,2);
							else
								y+=pow(i,3);
						}
				printf("%d %d\n",x,y);
				x=0;
				y=0;
		}
		
	}
	return 0;
}
