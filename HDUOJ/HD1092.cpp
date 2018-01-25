#include <stdio.h>
int main()
{       int n,i,s=0;
	while((scanf("%d",&n))!=EOF&&n)
	{
		s=0;
		while(n--)
		{
			scanf("%d",&i);
			s+=i;
		}
		printf("%d\n",s);
	}
	return 0;
}
