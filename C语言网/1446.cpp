#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
  int a,b,c;
  std::cin >> a>>b>>c;
  int tt=max(a,max(b,c));
  for (int i = tt; ; i++) {
    if (i%a==0&&i%b==0&&i%c==0) {
      std::cout << i << '\n';
      break;
    }
  }
  return 0;
}
