#include <bits/stdc++.h>
using namespace std;
double EPS=1e-6;
double f(double x){
  return x*x*x-5*x*x+10*x-80;
}
int main(int argc, char const *argv[]) {
  double root,x1,x2,y;
  std::cin >> x1>>x2;
  root=x1+(x2-x1)/2;
  int count=1;
  y=f(root);
  while (fabs(y)>EPS) {
    if (y>0) {
      x2=root;
    }else{
      x1=root;
    }
    root=x1+(x2-x1)/2;
    y=f(root);
    count++;
  }
  printf("%.8lf\n", root);
  printf("%d\n", count);
  return 0;
}
