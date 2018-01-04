//# include<iostream>
//# include<queue>
//using namespace std;
//typedef queue<int>que;
//que q1,q2;
//int main()
//{
//	int n,t;
//	cin>>n;
//	while(n--)
//	{
//		cin>>t;
//		int count=0;
////		for(int i=1;i<=n;i++)
//		while(t--)
//		{
//			for(int j=1;j<=2;j++)
//				q1.push(j);		
//		}
//		cout<<q1.size()<<endl;
//	}
//
//	return 0;
//}
//上面第一个本来是打算用queue来做的，但是没必要，就没做完，而下面的是自己用数组做的带码，嗯，出问题了，没查出来。最后就是copy了别人同样思路的代码给a了 
//# include<stdio.h>
//# define N 100100
//void show(int temp[])
//{
//	printf("show\n");
//	for(int i=1;i<=N;i++)
//	{
//		if(temp[i]!=0)
//			if(i==1)
//				printf("%d",temp[i]);
//			else
//				printf(" %d",temp[i]);	
//	}
//	printf("\n");
//}
//int a[N];
//int main()
//{
//	int t,n;
//	scanf("%d",&t);
//	while(t--)
//	{
//		scanf("%d",n);
//		int count=n;
//		for(int i=1;i<=n;i++)
//			a[i]=i;
//		if(n<=3)
//			show(a);
//		else	
//		while(count>3)
//		{
//			for(int i=1;i<=n;i++)
//			{	
//				if(a[i]%2==0)
//				{
//					a[i]=0;
//					--count;
//				}
//			}
//			if(count>3)
//			{
//				int xx=0;
//				for(int i=1;i<=n;i++)
//				{
//					if(a[i]!=0)
//					{
//						if(xx==3)
//						{
//							a[i]=0;
//							--count;
//							xx=0;	
//						}	
//						else
//							++xx;		
//					}	
//				}
//				if(count<=3)
//				{
//					show(a);
//					break;
//				}
//			}else
//			{
//				show(a);
//				break;
//			}
//				
//		}
//	}
//	return 0;
//}

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int t,n,cnt,sum,i;
    int visit[5010];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            visit[i]=1;
        }
        cnt=n;
        while(cnt>3)
        {
            cnt=0,sum=0;
            for(i=1;i<=n;i++)
            {
                if(visit[i])
                {
                    sum+=visit[i];
                    if(sum%2==0)
                      visit[i]=0;
                        cnt=cnt+visit[i];
                }
            }
            sum=0;
            if(cnt<=3)
            {
                break;
            }
            cnt=0;
            for(i=1;i<=n;i++)
            {
                if(visit[i])
                {
                    sum+=visit[i];
                    if(sum%3==0)
                        visit[i]=0;
                }
                cnt=cnt+visit[i];
            }
            if(cnt<=3)
            {
                break;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(visit[i])
            {
                if(i==1)
                {
                    cout<<i;
                }else{
                    cout<<" "<<i;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
