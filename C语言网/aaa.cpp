#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str="abcdefg";
  int n;
  std::cin >> n;
  n%=str.length();
  string temp=str.substr(str.length()-n,n);
  str=str.substr(0,str.length()-n);
  // std::cout << str << '\n';
  // reverse(temp.begin(),temp.end());
  str=temp+str;
  std::cout << str << '\n';
  return 0;
}
