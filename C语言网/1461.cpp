#include <iostream>
using namespace std;
char a[26];
string fun(int n) {
  string str="";
  if (n==1) {
    str="A";
    return str;
  }else{
    str+=fun(n-1);
    str+=a[n-1];
    str+=fun(n-1);
    // result+=str+fun(n-1);
  }
  return str;
}
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  a[0]='A';
  for (int i = 1; i < 26; i++) {
    a[i]=a[0]+i;
  }
  std::cout << fun(n) << '\n';
  return 0;
}
