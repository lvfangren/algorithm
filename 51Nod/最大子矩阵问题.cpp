// HDU1081
#include <bits/stdc++.h>
using namespace std;
int arr[500+10][500+10];
int res[500+10];
int fun(int *a,int n)
{
  if (!a||n<=0) {
    return 0;
  }
  int curmax=0,max=0;
  max=curmax=a[0];
  for (int i = 1; i < n; i++) {
    if (curmax>0) {
      curmax+=a[i];
    }
    else{
      curmax=a[i];
    }
    if (curmax>max) {
      max=curmax;
    }
  }
  return max;
}
int main(int argc, char const *argv[]) {
  int M,N;
  memset(arr,0,sizeof(arr));
  memset(res,0,sizeof(res));
  std::cin >> M>>N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      std::cin >> arr[i][j];
    }
  }
  int sumij[500+10];
  int max_n=arr[0][0],maxs=arr[0][0];
  for (int i = 0; i < N; i++) {
    memset(sumij,0,sizeof(sumij));
    for (int j = i; j < N; j++) {
      for (int k = 0; k < M; k++) {
        sumij[k]+=arr[j][k];
      }
      max_n=fun(sumij,M);
      if (max_n>maxs) {
        maxs=max_n;
      }
    }
  }
  std::cout << maxs << '\n';
  return 0;
}
