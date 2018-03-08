#include <bits/stdc++.h>
using namespace std;
struct{
  int x,y;
  int r;
}cic;
int x1,z1;
int x2,y2;
int x3,y3;
void check() {
  if (sqrt((x1-cic.x)*(x1-cic.x)+(z1-cic.y)*(z1-cic.y))==cic.r*1.0) {
    std::cout << "Yes" << '\n';
    return ;
  }else if (sqrt((x2-cic.x)*(x2-cic.x)+(y2-cic.y)*(y2-cic.y))==cic.r*1.0) {
    std::cout << "Yes" << '\n';
    return ;
  } else if (sqrt((x3-cic.x)*(x3-cic.x)+(y3-cic.y)*(y3-cic.y))==cic.r*1.0) {
    std::cout << "Yes" << '\n';
    return ;
  }else{
    std::cout << "No" << '\n';
    return ;
  }
}
int main(int argc, char const *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
      scanf("%d %d %d %d %d %d %d %d %d", &cic.x,&cic.y,&cic.r,&x1,&z1,&x2,&y2,&x3,&y3);
      // scanf("%d %d %d %d %d %d", &x1,&z1,&x2,&y2,&x3,&y3);
      check();
  }
  return 0;
}
