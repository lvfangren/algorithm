#include <bits/stdc++.h>
using namespace std;
const int MAX=50;
int main(int argc, char const *argv[]) {
  int m,n;
  char arr[MAX][MAX];
  std::cin >> n>>m;
  int result=0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> arr[i][j];
    }
  }
  // std::cout << 3 << '\n';
  // for (int j = 0; j < m; j++) {
  //     if (arr[0][j]!='X') {
  //       result++;
  //     }
  //   }
  std::cout << result << '\n';
  // for (int i = 0; i < n; i++) {
  //
  // }

  return 0;
}
