// #include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
string str="";
void fun(int n){
  int item1=n/100;
  int item3=n%10;
  int item2=(n-(item1*100+item3))/10;
  // n/10-n/100*10
  if (item1) {
    for (int i = 0; i < item1; i++) {
      str+="B";
    }
  }
  if (item2) {
    for (int i = 0; i < item2; i++) {
      str+="S";
    }
  }
  char tem='1';
  if (item3) {
    stringstream strea;
    for (int i = 1; i <= item3; i++) {
      strea.clear();
      string tem="";
      strea<<i;
      strea>>tem;
      str+=tem;
    }
  }
}
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  fun(n);
  std::cout << str << '\n';
  return 0;
}
