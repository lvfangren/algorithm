#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  long long A,B,C;
  for (int i = 1; i <= n; i++) {
    std::cin >> A>>B>>C;
    if (A+B>C) {
      std::cout << "Case #"<<i<<": true" << '\n';
    }else{
      std::cout << "Case #"<<i<<": false" << '\n';  
    }
  }
  return 0;
}
