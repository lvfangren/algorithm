#include <bits/stdc++.h>
using namespace std;
const int MAX=50000+10;
int dp[MAX][2];
int a[MAX];
int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  for (int i = 1; i <= N; i++) {
    std::cin >> a[i];
  }
  for(int i=2;i<=N;i++) {
        dp[i][0]=max(dp[i-1][0],dp[i-1][1]+abs(a[i-1]-1));  
        dp[i][1]=max(dp[i-1][0]+abs(a[i]-1),dp[i-1][1]+abs(a[i]-a[i-1]));
    }
  std::cout << max(dp[N][0],dp[N][1]) << '\n';
  return 0;
}
