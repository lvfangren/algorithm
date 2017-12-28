# include<stdio.h>
int main()
{
	int n,m;
	int a[51][6];
	while(~scanf("%d %d",&n,&m))
	{
		double sum;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				scanf("%d",&a[i][j]);
		for(int i=0;i<n;i++)
		{
			sum=0;
			for(int j=0;j<m;j++)
			{
				sum+=a[i][j];		
			}
			printf("%.2lf ",sum/m);		
		}
		printf("\n");
		double wusum[5]={0,0,0,0,0};
		for(int j=0;j<m;j++)
		{
			for(int i=0;i<n;i++)
			{
				wusum[j]+=a[i][j];	
			}
			printf("%.2lf ",wusum[j]/n);	
		}
		printf("\n");
		int count=0,numcount=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]>=(wusum[j]/n))
				{
					++count;
				}
			}
			if(count==m)
			{
				++numcount;
			}
		}
		printf("%d\n\n",numcount);		
	}
}
