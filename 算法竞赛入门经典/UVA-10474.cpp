// # include<bits/stdc++.h>
// #include<iostream>
#include <cstdio>
#include<algorithm>
using namespace std;
const int MAX=100010;
int a[MAX];
int main(int argc, char const *argv[]) {
  int n,m;
  int temp,kase=0;
  while (scanf("%d %d",&n,&m)!=EOF&&n) {
    // int *p=int [m];
    printf("CASE# %d:\n", ++kase);
    for (int i=0;i<n;i++) {
      scanf("%d", &a[i]);
    }
    sort(a,a+n);
    while (m--) {
      scanf("%d", &temp);
      int p=lower_bound(a,a+n,temp)-a;
      if (a[p]==temp) {
        printf("%d found at %d\n",temp, p+1);
      }else{
        printf("%d not found\n",temp);
      }
    }
  }
  return 0;
}
// #include<cstdio>
// #include<algorithm>
// using namespace std;
// const int maxn = 10000;
// int main() {
//   int n, q, x, a[maxn], kase = 0;
//   while(scanf("%d%d", &n, &q) == 2 && n) {
//     printf("CASE# %d:\n", ++kase);
//     for(int i = 0; i < n; i++) scanf("%d", &a[i]);
//     sort(a, a+n); //
// // 排序
//     while(q--) {
//       scanf("%d", &x);
//       int p = lower_bound(a, a+n, x) - a; //
// // 在已排序数组a中寻找x
//       if(a[p] == x) printf("%d found at %d\n", x, p+1);
//       else printf("%d not found\n", x);
//     }
//   }
//   return 0;
// }
