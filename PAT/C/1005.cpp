#include <bits/stdc++.h>
using namespace std;
std::vector<int> v[100];
void fun(int n,int i) {
  if (n==1) {
    return 0;
  }else{
    if (n%2==0) {
      n/=2;
      v[i].push_back(n);
      fun(n,i);
    }else{
      n=(n*3+1)/2;
      v[i].push_back(n);
      fun(n,i);
    }
  }
}
int main(int argc, char const *argv[]) {
  int k;
  std::cin >> k;
  int *a=new int[k];
  for (int i = 0; i < k; i++) {
      std::cin >> a[i];
  }
  sort(a,a+k);
  for (int i = 0; i < k; i++) {
    fun(a[i],i);
  }
  for (int i = 0; i < k; i++) {
    if (v[i].find(a[i])) {
      /* code */
    }
  }
  return 0;
}
