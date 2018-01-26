#include <bits/stdc++.h>
using namespace std;
const int MAX_N=100000;
typedef pair<int,int> pp;
pp x[MAX_N];
int s[MAX_N],t[MAX_N];
int main(int argc, char const *argv[]) {
  int n;
  while (scanf("%d",&n )!=EOF) {
    for (int i = 0; i < n; i++) {
      std::cin >> s[i];
      // x[i].first=t[i];
      x[i].second=s[i];
    }
    for (int i = 0; i < n; i++) {
      std::cin >> t[i];
      x[i].first=t[i];
    }
    // for (int i = 0; i < n; i++) {
    //     x[i].first=t[i];
    //     x[i].second=s[i];
    // }
    sort(x,x+n);
    int count=0,temp=0;
    for (int i = 0; i < n; i++) {
      if (x[i].second>temp) {
        count++;
        temp=x[i].first;
      }

    }
    std::cout << count << '\n';
  }
  return 0;
}
