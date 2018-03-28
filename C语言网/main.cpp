// 求最长子序列问题的各种解法
#include <bits/stdc++.h>
using namespace std;
// 分治法求解  O(nlogn)
int fun(int *a,int from,int to){
  if (from==to) {
    return a[from];
  }else{
    int middle=(from+to)/2;
    int left=fun(a,from,middle);
    int right=fun(a,middle+1,to);
    int maxl=0,maxr=0,temp=0;
    for (int i = middle-1; i >=from; i--) {
      temp+=a[i];
      maxl=max(maxl,temp);
    }
    temp=a[middle+1];
    for (int i = middle+2; i <=to; i++) {
      temp+=a[i];
      maxr=max(maxr,temp);
    }
    return max(left,max(right,(maxl+maxr)));
  }
}
// dp O(n)
// int dp[100010];
// int fun2(int *a,int n)
// {
//   dp[0]=a[0];
//   int sum=0;
//   for (int i = 0; i < n; i++) {
//     sum+=a[i];
//     dp[i]=max(dp[i-1]+a[i],dp[i]);
//   }
// }
int main(int argc, char const *argv[]) {
  int a[]={1,4,-3,5,2,3,-3,7,3,-5,-2};
// 暴枚法  O(n^3)
  int max=a[0];
  for (int i = 0; i <11; i++) {
    for (int j = i; j <11; j++) {
      int cum=0;
      for (int k = i; k <=j; k++) {
        cum+=a[k];
      }
      if (cum>max) {
        max=cum;
      }
    }
  }
  std::cout << max << '\n';
  return 0;
}
