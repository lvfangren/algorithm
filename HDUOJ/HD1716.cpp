//# include<bits/stdc++.h>
//using namespace std;
//int main(int argc, char const *argv[]) {
//	  freopen("in.txt","r",stdin);		
//	  int p[4],a[25];
//	  while (scanf("%d %d %d %d",&p[0],&p[1],&p[2],&p[3])!=EOF&&(p[0]+p[1]+p[2]+p[3])!=0) {
//			sort(p,p+4);
//			int j=0;
//			do
//			{
//				int temp=0;
//				for(int i=0;i<4;i++)
//				{
//					temp=temp*10+p[i];
//				}
//				a[j]=temp;
//	//			cout<<a[j]<<endl;
//				j++;							
//			}while(next_permutation(p,p+4));
//			int flag=1;
//	  		for(int i=0;i<j;i++)
//	  		{
//	  			if(a[i]/1000!=0)
//				{
//	//				cout<<a[i]/1000;
//					if(a[i]/1000==a[i+1]/1000)
//					{
//						cout<<a[i]<<" ";	
//					}else
//					{
//						cout<<a[i]<<endl;	
//					}  	
//				}else{
//					if(flag)
//					{
//						cout<<endl;
//						flag=0;						
//					}
//				}	
//			}
//			cout<<endl;
//	  }
//	 fclose(stdin); 
//  return 0;
//}
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a[4],time_sum=0;
	while (scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3])&&a[0]+a[1]+a[2]+a[3])
	{
		if (time_sum!=0)//纯粹为了格式才搞的这个一个的
		{
			printf("\n");
		}
		time_sum=1;
		int i=0,j,b[24];
		sort(a,a+4);
		do {
			if (a[0]!=0)
			{
				b[i]=a[0]*1000+a[1]*100+a[2]*10+a[3];
				i++;
			}
		} while(next_permutation(a,a+4));
		for (j=0;j<i;j++)
		{
			if (j+1==i)
				printf("%d\n",b[j]);
			else if ((b[j]/1000==b[j+1]/1000))
				printf("%d ",b[j]);
			else
				printf("%d\n",b[j]);
		}
	
	}
	return 0;
}
