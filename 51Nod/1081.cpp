#include <bits/stdc++.h>
using namespace std;
const int MAX=50000;
int p[MAX+10];
int main(int argc, char const *argv[]) {
  int N;
  // int *p=new int[100];
  memset(p,0,sizeof(p));
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    cin>>p[i];
  }
  int q,a,b;
  std::cin >> q;
  for (int i = 0; i < q; i++) {
    std::cin >> a>>b;
    long long result=0;
    for (int j = 0; j < b; j++) {
      result+=p[a-1];
      a++;
    }
    std::cout << result << '\n';
  }
  return 0;
}
