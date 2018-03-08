#include <bits/stdc++.h>
using namespace std;
const int MAX=15;
int main(int argc, char const *argv[]) {
  char str[MAX];
  cin>>str;
  int len=strlen(str);
  sort(str,str+len);
  do {
    std::cout << str << '\n';
  } while(next_permutation(str,str+len));
  return 0;
}
