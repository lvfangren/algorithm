#include <bits/stdc++.h>
using namespace std;
int fn(int n)
{
  long long temp=n;
  int res=1;
  while (n) {
    if (n&1) {
      res=(res*temp)%10;
    }
    temp=temp*temp;
    temp%=10;
    n/=2;
  }
  return res;
}
int main(int argc, char const *argv[]) {
  int N;
  while (cin>>N) {
    std::cout << fn(N) << '\n';
  }
  return 0;
}
