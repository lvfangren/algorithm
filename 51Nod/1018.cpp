#include <bits/stdc++.h>
using namespace std;
bool cmp(int x1,int x2) {
  return x1<x2;
}
int main(int argc, char const *argv[]) {
  int N;
  while (cin>>N&&N) {
    int *p=new int[N];
    for (int i = 0; i < N; i++) {
      std::cin >> p[i];
    }
    sort(p,p+N,cmp);
    for (int i = 0; i < N; i++) {
      std::cout << p[i] << '\n';
    }
  }
  return 0;
}
