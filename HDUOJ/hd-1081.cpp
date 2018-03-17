// // #include <bits/stdc++.h>
// #include <iostream>
// #include <cstring>
// using namespace std;
// int arr[100+10][100+10];
// int fun(int *a,int n)
// {
//   if (!a||n<=0) {
//     return 0;
//   }
//   int x1,x2;
//   x1=x2=a[0];
//   for (int i = 1; i < n; i++) {
//     if (x1>0) {
//       x1+=a[i];
//     }else{
//       x1=a[i];
//     }
//     if (x1>x2) {
//       x2=x1;
//     }
//   }
//   return x2;
// }
// int main(int argc, char const *argv[]) {
//   int N;
//   memset(arr,0,sizeof(arr));
//   std::cin >> N;
//   for (int i = 0; i < N; i++) {
//     for (int j = 0; j < N; j++) {
//       std::cin >> arr[i][j];
//     }
//   }
//   int tem[100+10];
//   int maxt=arr[0][0],res=arr[0][0];
//   for (int i = 0; i < N; i++) {
//     memset(tem,0,sizeof(tem));
//     for (int j = i; j < N; j++) {
//       for (int k = 0; k < N; k++) {
//         tem[k]+=arr[j][k];
//       }
//       maxt=fun(tem,N);
//       if (maxt>res) {
//         res=maxt;
//       }
//     }
//   }
//   std::cout << res << '\n';
//   return 0;
// }
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
#define MAX 105
// 第i行前j个元素和
int sum[MAX][MAX];

int main()
{//freopen("sample.txt", "r", stdin);  
    int n;
    while(~scanf("%d", &n))
    {
        int data, ans=1e-6;
        memset(sum, 0, sizeof(sum));
        for(int i=1; i<=n; ++i)
        {
            for(int j=1; j<=n; ++j)
            {
                scanf("%d", &data);
                // 累加第i行前j个元素和
                sum[i][j] += sum[i][j-1] + data;
            }
        }
        // 枚举第k行，第i列至j列的和
        for(int i=1; i<=n; ++i)
        {
            for(int j=i; j<=n; ++j)
            {
                int subSum = 0;
                for(int k=1; k<=n; ++k)
                {
                    // 动态规划思想，subSum<0将会减少总和，所以此时将其置0
                    if(subSum < 0) subSum = 0;
                    subSum += sum[k][j] - sum[k][i-1];
                    ans = max(ans, subSum);
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
