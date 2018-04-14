// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
int num=0;
int fun(int n){
  if (n==1) {
    return num;
  }else{
    num++;
    if (n%2==0) {
      n/=2;
      fun(n);
    }else{
      n=(n*3+1)/2;
      fun(n);
    }
  }
}
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  fun(n);
  std::cout <<num << '\n';
  return 0;
}
