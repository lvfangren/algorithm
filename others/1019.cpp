#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int N,count=0;
  while (cin>>N&&N) {
    int *p=new int[N];
    for (int i = 0; i < N; i++) {
      // std::cin >> p[i];
      scanf("%d", &p[i]);
    }
    for (int i = 0; i < N; i++) {
      for (int j = i+1; j < N; j++) {
        if (p[i]>p[j]) {
          ++count;
        }
      }
    }
    // std::cout << count << '\n';
    printf("%d\n",count);
  }
  return 0;
}
