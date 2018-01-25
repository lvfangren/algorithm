# include<iostream>
#include <algorithm>
# define N 100100
using namespace std;
bool judge(int x,int y)
{
	return x>y;
}
int a[N];
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF&&(m||n))
	{
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n,judge);
		for(int i=0;i<m&&i<n;i++)
//		此处注意如果不加i<n会超时 
		{
			if(i>0)
				cout<<" ";
			cout<<a[i];	
		}
		cout<<endl;
	}

	return 0;
} 
//    #include <cstdio>  
//    #include <cstring>  
//    #include <queue>  
//    #include <algorithm>  
//    using namespace std;  
//    int main()  
//    {  
//        int N, M;  
//        while(scanf("%d%d", &N, &M), N||M)  
//        {  
//            priority_queue<int> Q;  
//            int a;  
//            for(int i = 1; i <= N; i++)  
//            scanf("%d", &a), Q.push(a);  
//            for(int i = 0; i < M; i++)  
//            {  
//                if(Q.empty())//空  
//                break;  
//                if(i > 0) printf(" ");  
//                printf("%d", Q.top());  
//                Q.pop();  
//            }  
//            printf("\n");  
//        }  
//        return 0;  
//    }   
