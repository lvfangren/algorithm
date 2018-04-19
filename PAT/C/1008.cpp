#include <bits/stdc++.h>
using namespace std;
const int MAX=100+5;
int a[MAX];
int main(int argc, char const *argv[]) {
  int n,m;
  std::cin >> n>>m;
  m=m%n;
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (int i = n-m; i < n; i++) {
    std::cout << a[i] << ' ';
  }
  for (int i = 0; i < n-m-1; i++) {
    std::cout << a[i] << ' ';
  }
  std::cout << a[n-m-1] << '\n';
  return 0;
}
