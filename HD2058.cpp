//³¬Ê± 
//# include<bits/stdc++.h>
//using namespace std;
//int main()
//{
////	freopen("in.txt","r",stdin);
//	int N,M;
//	while(scanf("%d %d",&N,&M)!=EOF&&(N||M))
//	{
//		int maxNum=max(N,M);
//		int start=1,end=1;
//		int temp=0;
//		for(int start=1;start<=maxNum;start++)
//		{
//			for(int end=start;end<=maxNum;end++)
//			{
//				int n=end-start+1;		
//				temp=n*(start+end)/2;
////				cout<<temp<<"\t"<<M<<endl;	
//				if(temp==M)
//				{
//					cout<<"["<<start<<","<<end<<"]"<<endl;
//					break;
//				}
//			}
//		}
//		cout<<endl;
//	}
////	fclose(stdin);
//	return 0;
//}
#include <stdio.h>  
#include <math.h>  
  
int main(void)  
{  
    int n, m, len, a1n, i;  
  
    while(scanf("%d%d", &n, &m) != EOF && (n || m)) {  
        len = (int)sqrt(m * 2.0);  
        for(i=len; i>0; i--) {  
            a1n = m - (i - 1) * i / 2;     //a1*n = m-(n+1)*n/2;  
            if(a1n % i == 0)  
                printf("[%d,%d]\n", a1n / i, a1n / i + i - 1);  
        }  
        putchar('\n');  
    }  
  
    return 0;  
}
