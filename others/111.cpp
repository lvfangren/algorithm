#include <bits/stdc++.h>
using namespace std;
std::map<char, int> m;
int main(int argc, char const *argv[]) {
  string temp;
  while (getline(cin,temp)) {
    int len=temp.length();
    for (int i = 0; i < len; i++) {
      if (temp[i]>='A'&&temp[i]<='Z') {
        temp[i]+=32;
      }
      m[temp[i]]++;
    }
    // std::cout << temp << '\n';
    string result="";
    for (int i = 0; i < len; i++) {
      if (m[temp[i]]==1) {
        result+='(';
      }else{
        result+=')';
      }
    }
    std::cout << result << '\n';

  }
  return 0;
}
