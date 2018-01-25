//# include<bits/stdc++.h>
# include<iostream>
# include<algorithm>
# include<stdio.h>
# include<stdlib.h>
# include<string.h>
using namespace std;
const int maxn = 1e5+5;
int a[maxn][12];
int main()
{
//	freopen("in.txt","r",stdin);
	int n,t,x,nowtime;
	while(~scanf("%d",&n)&&n)
	{
		memset(a,0,sizeof(a));
		nowtime=0;
		while(n--)
		{
			scanf("%d %d",&x,&t);
			if(t>nowtime)
				nowtime=t;
			a[t][x]++;	
		}
		for(int i=nowtime-1;i>=0;i--)
		{
			for(int j=0;j<=10;j++)
			{
				a[i][j]+=max(max(a[i+1][j-1],a[i+1][j+1]),a[i+1][j]);
			}
		}
		cout<<a[0][5]<<endl;
	}
//	fclose(stdin);
	return 0;
}

