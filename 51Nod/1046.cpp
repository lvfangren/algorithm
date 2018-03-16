// 1046
#include <bits/stdc++.h>
using namespace std;
int f(int a,int N,int mod){
  long long aa=a,r=1;
  while (N) {
    if (N%2==1) {
      r=(r*aa)%mod;
    }
    aa=(aa*aa)%mod;
    N/=2;
  }
  return r;
}
int main(int argc, char const *argv[]) {
  int A,B,C;
  while (std::cin >> A>>B>>C) {
    std::cout << f(A,B,C) << '\n';
  }
  return 0;
}
