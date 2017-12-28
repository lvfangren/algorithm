# include<iostream>
using namespace std;
# define N 41
int main()
{
	int n;
	__int64 a[N]={0,3,8},b[N]={0,1,2};
	for(int i=3;i<=N;i++)
	{
		a[i]=3*a[i-1]-b[i-1];
		b[i]=a[i-1]-b[i-1];
	}
	while(scanf("%d",&n)!= EOF)
	{
		cout<<a[n]<<endl;
	}
	return 0;
}
//#include <iostream>  
//using namespace std;  
//  
//#define MAXN 40  
//  
//int main()  
//{  
//    long long f[MAXN];  
//    long long fo[MAXN];  
//  
//    //Ìî³ä±í¸ñ  
//    f[1]=3;  
//    fo[1]=1;  
//    for (int i=2; i<MAXN; ++i)  
//    {  
//        f[i]=3*f[i-1]-fo[i-1];  
//        fo[i]=f[i-1]-fo[i-1];  
//    }  
//  
//    int n;  
//    while (cin>>n)  
//    {  
//        cout<<f[n]<<endl;  
//    }  
//  
//    return 0;  
//}  
