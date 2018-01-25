//# include<stdio.h>
////using namespace std;
//int change(int n)
//{
//	int ref=0;
//	int k=0,temp=n;
//	while(temp!=0)
//	{
//		++k;
//		temp/=10;
//	}
//	for(int i=0;i<k;i++)
//	{
//		ref*=10;
//		ref+=(n%10);
//		n/=10;		
//	}
//	return ref;	
//}
//int main()
//{
//	int a,b;
//	int i,j;
//	while(scanf("%d %d",&a,&b)!=EOF)
//	{
//		for(i=a;i<=b;i++)
//		{
//			int flag=1;
//			for(j=2;j<i;j++)
//			{
//				if(i%j==0)
//					flag=0;	
//			}
//			if(flag&&(i==change(i)))
//			{
////				cout<<i<<endl;
//				printf("%d\n",i);
//			}
//		}
////		cout<<endl;
//		printf("\n");
//	}
//	return 0;
//}
//上面的解法超时, 友情提醒，没事别tm在瞎暴力了，会出大事的。。。 
# include<iostream>
using namespace std; 
bool prim[9989900];//通过暴力直到在5到100000000中最大的素数回文数是9989899   
int h[10005];  
void sushu()//素数为0，合数为1   
{  
    int i=2,j;  
    for(j=i*i;j<=9989899;j+=i)  
    {  
            prim[j]=1;  
    }  
    for(i=3;i<=3161;i+=2)//因为除2之外的偶数都是合数，所以将2另外考虑   
    {
	//然后直接在奇数里面找就行了   
        if(prim[i]) continue;   
        for(j=i*i;j<=9989899;j+=i)  
        {  
            prim[j]=1;  
        }  
    }  
}  
bool huiwen(int n)//倒过来和的数与原来相等，那么就是回文数   
{  
    int temp=n,t=0;  
    while(temp)  
    {  
        t=t*10+temp%10;  
        temp/=10;  
    }  
    return t==n;  
}  
int main()  
{  
    sushu();//打表会加快速度，但是直接开100000000会超内存，所以需要找出最大的素回文数   
    int t=0;  
    for(int i=5;i<=9989899;i++)  
    {  
        if(!prim[i]&&huiwen(i))  
        {  
            h[t++]=i;  
        }  
    }  
    int a,b;  
    while(scanf("%d%d",&a,&b)!=EOF)  
    {  
        for(int i=0;i<t;i++)  
        {  
            if(h[i]<a)  
            {  
                continue;  
            }  
            else if(h[i]<=b)  
            {  
                printf("%d\n",h[i]);  
            }  
            else  
            {  
                break;  
            }  
        }  
        printf("\n");  
    }  
    return 0;  
}  
