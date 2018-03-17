#include <bits/stdc++.h>
using namespace std;
const int MAX=50000+10;
long long arr[MAX];
int main(int argc, char const *argv[]) {
  int N;
  memset(arr,0,sizeof(arr));
  std::cin >> N;
  long long m=0,ans=0;
  for (int i = 0; i < N; i++) {
      std::cin >> arr[i];
      m=max(m+arr[i],arr[i]);
      ans=max(m,ans);
  }
  std::cout << ans << '\n';
  return 0;
}
