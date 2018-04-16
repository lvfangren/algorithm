#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str,result="";
  istringstream istr;
  while (getline(cin,str)) {
    reverse(str.begin(),str.end());
    istr.str(str);
    string temp;
    while (istr>>temp) {
      reverse(temp.begin(),temp.end());
      result=result+temp+" ";
    }
    std::cout << result.substr(0,result.length()-1) << '\n';
  }
  return 0;
}
