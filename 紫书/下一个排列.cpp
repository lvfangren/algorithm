# include<cstdio>
# include<algorithm>
using namespace std;
int main()
{
	freopen("in.txt","r",stdin);
	int n=1,p[4];
	while (scanf("%d %d %d %d",&p[0],&p[1],&p[2],&p[3])!=EOF&&(p[0]+p[1]+p[2]+p[3])!=0) {
		sort(p,p+4);
		do{	
			
			for(int i=0;i<4;i++)
			{
				printf("%d",p[i]);
			}
			n++;
			printf(" ");		
		}while(next_permutation(p,p+4));	
  		printf("\n");
	}		
  	fclose(stdin);
	return 0;
}
