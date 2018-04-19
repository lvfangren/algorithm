#include <bits/stdc++.h>
using namespace std;
std::vector<int> v;
int main(int argc, char const *argv[]) {
  int a,b;
  while (std::cin >> a>>b) {
    if (b==0) {
      break;
    }else{
      v.push_back(a*b);
      v.push_back(b-1);
    }
  }
  if (v.size()==0) {
    std::cout << "0 0" << '\n';
  }else{
    for (size_t i = 0; i < v.size()-1; i++) {
      std::cout << v[i] << ' ';
    }
    std::cout << v[v.size()-1] << '\n';
  }
  return 0;
}
