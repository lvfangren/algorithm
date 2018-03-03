// #include <bits/stdc++.h>
// using namespace std;
// int judge(int temp[],int m)
// {
//   int flag=1;
//   for (int i = 0; i < m-1; i++) {
//     int sum=temp[i]+temp[i+1];
//     for (int j = 2; j < sum; j++) {
//       // for (int k = 0; k < count; k++) {
//       //   /* code */
//       // }
//       if (sum%j==0) {
//         flag=0;
//       }
//     }
//     if (!flag) {
//       return 0;
//     }
//   }
//   return 1;
//
// }
// int main(int argc, char const *argv[]) {
//   int a[20];
//   int n,no=1;
//   while (scanf("%d", &n)!=EOF&&n) {
//     for (int i = 0; i < n; i++) {
//       a[i]=i+1;
//     }
//     do {
//         if (judge(a,n)) {
//           std::cout << "Case " <<no<<":" << '\n';
//           for (int z = 0; z < n; z++) {
//             std::cout<< a[z] <<" ";
//           }
//           std::cout << '\n';
//         }
//     } while(next_permutation(a,a+n));
//     ++no;
//   }
//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int A[20],n;
int prime[33];
int vis[20]={0};
//打范围内素数表
void init() {
  prime[1]=1;
  for (int i = 2; i < 32; i++) {
    if (!prime[i]) {
      for (int j = i+i; j < 32; j=j+i) {
        prime[j]=1;
      }
    }
  }
  return ;
}
void dfs(int cur) {
  if (cur==n&&prime[A[0]+A[n-1]]) {
    for (int i = 0; i < n; i++) {
      printf("%d", &A[i]);
    }
    printf("\n");
  }else{
    for (int i = 2; i <= n; i++) {
      if (!vis[i]&&prime[i+A[cur-1]]) {
        A[cur]=i;
        vis[i]=1;
        dfs(cur+1);
        vis[i]=0;
      }
    }
  }
}
int main(int argc, char const *argv[]) {
  A[0]=1;
  while (scanf("%d", &n)!=EOF&&n) {
    init();
    dfs(1);
  }
  return 0;
}




















// #include<cstdio>
// #include<cstring>
// #include<algorithm>
// using namespace std;
//
// int vis[32];
// int viss[20];
// int res[20],n;
// void init() {
//     vis[1] = 1;
//     for(int i = 2; i <= 31;i++) {
//         if(!vis[i]) {
//             for(int j = i + i; j <= 31; j += i)
//                 vis[j] = 1;
//         }
//     }
//     return;
// }
//
// void dfs(int pre,int sum) {
//     if(sum == n) {
//         if(!vis[pre + 1]) {
//             printf("%d",res[1]);
//             for(int i = 2; i <= n;i++) {
//                 printf(" %d",res[i]);
//             }
//             printf("\n");
//         }
//         return;
//     }
//     for(int i = 1; i <= n; i++) {
//         if(!viss[i] && !vis[i + pre]) {
//             viss[i] = 1;
//             res[sum + 1] = i;
//             dfs(i,sum + 1);
//             viss[i] = 0;
//         }
//     }
//     return;
// }
// int main() {
//     int cas = 1;
//     init();
//     bool f = 0;
//     while(scanf("%d",&n) == 1) {
//         if(f)
//             printf("\n");
//         else
//             f = 1;
//         memset(viss, 0,sizeof(viss));
//         printf("Case %d:\n",cas++);
//         viss[1] = 1;
//         res[1] = 1;
//         dfs(1,1);
//     }
// }
