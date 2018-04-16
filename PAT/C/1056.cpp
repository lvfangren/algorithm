#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  int result=0;
  std::cin >> n;
  int *a=new int[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i!=j) {
        result+=a[i]*10+a[j];
      }
    }
  }
  std::cout << result << '\n';
  return 0;
}
