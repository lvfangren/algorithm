// 数组越界，堆栈溢出

#include <bits/stdc++.h>
using namespace std;
const int MAX=10000+5;
int a[MAX];
int main(int argc, char const *argv[]) {
  int m,n;
  std::cin >> m>>n;
  for (int i = 2; i <=MAX; i++) {
    a[i]=i;
  }
  a[0]=0;
  a[1]=0;
  for (int i = 2; i <=sqrt(MAX); i++) {
    for (int j = 2*i; j <=MAX; j+=i) {
      a[j]=0;
    }
  }
  std::vector<int> v;
  for (int i = 2; i <=MAX; i++) {
    if (a[i]) {
      v.push_back(a[i]);
    }
  }
  int num=1;
  m=m==0?0:m-1;
  for (int i = m; i <n; i++) {
    if (num==10||i==n-1) {
      std::cout << v[i] << "\n";
      num=0;
    }else{
      std::cout << v[i] <<" ";
    }
    num++;
  }
  return 0;
}
