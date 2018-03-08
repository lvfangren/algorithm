#include <bits/stdc++.h>
using namespace std;
const double e=2.71828182845;
const double pi=3.1415926;
int main(int argc, char const *argv[]) {
  int len=0;
  double N;
  scanf("%lf", &N);
  len=ceil(log10(2*pi)/2+log10(N)/2+N*log10(N/e));
  std::cout << len << '\n';
  return 0;
}
