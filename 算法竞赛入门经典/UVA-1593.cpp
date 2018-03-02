#include <bits/stdc++.h>
using namespace std;
const int MAXSTR=180;
const int MAX=81;
int cstr[MAX];
std::vector<string> v;
int main(int argc, char const *argv[]) {
  freopen("in.txt","r",stdin);
  string code,str;
  int x=-1,y=0;
  while (getline(cin,code)) {
    stringstream temp(code);
    while (temp>>str) {
      // std::cout << str << '\n';
      cstr[++x]=max(cstr[x],(int)str.length());
      v.push_back(str);
    }
  }
  fclose(stdin);
  return 0;
}
