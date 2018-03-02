#include<bits/stdc++.h>
using namespace std;
const int MAX=100005;
int result[MAX];
void scy()
{
  memset(result,0,sizeof(result));
  for (int i = 1; i < MAX; i++) {
    int y=i,z=0,sum=i;
    while (y>0) {
      // x[z++]=y%10;
      sum+=y%10;
      y/=10;
    }
    if (result[sum]==0||i<result[sum]) {
      result[sum]=i;
    }
    // if ((i+sum)==temp) {
    //   return i;
    // }
  }
  // return 0;
}
int main(int argc, char const *argv[]) {
  int n,m;
  scy();
  while (scanf("%d", &n)!=EOF&&n) {
    while(n--) {
      cin>>m;
      std::cout << result[m] << '\n';
    }
  }
  return 0;
}
