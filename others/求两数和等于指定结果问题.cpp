#include <bits/stdc++.h>
using namespace std;
std::vector<int> v;
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  while (n--) {
    int temp;
    std::cin >> temp;
    v.push_back(temp);
  }
  int m;
  std::cin >> m;
  int i=0,j=v.size()-1;
  int sum=v[i]+v[j];
  while (sum!=m||i>=j) {
    if (sum>m) {
      j--;
    }else{
      i++;
    }
    sum=v[i]+v[j];
  }
  std::cout << v[i]<<v[j] << '\n';
  return 0;
}
