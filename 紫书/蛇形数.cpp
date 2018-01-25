# include<stdio.h>
# include<string.h>
# define N 10
int a[N][N];
int main()
{
	memset(a,0,sizeof(a));
	int n;
	scanf("%d",&n);
	int x,y,tot=a[x=0][y=n-1]=1;
	while(tot<n*n)
	{
		while(x+1<n && !a[x+1][y]) a[++x][y]=++tot;
		while(y-1>=0 && !a[x][y-1]) a[x][--y]=++tot;
		while(x-1>=0 && !a[x-1][y]) a[--x][y]=++tot;
		while(y+1<n && !a[x][y+1]) a[x][++y]=++tot;
	}
	for(x=0;x<n;x++)
	{
		for(y=0;y<n;y++)
			printf("%3d",a[x][y]);
		printf("\n");	
	}
	return 0;
}
