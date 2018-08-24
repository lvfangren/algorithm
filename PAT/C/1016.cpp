#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string A,B;
  int da,db;
  std::cin >> A>>da>>B>>db;
  int lena,lenb;
  lena=A.length();
  lenb=B.length();
  int resulta=0,resultb=0;
  for (int i = 0; i < lena; i++) {
    if ((A[i]-'0')==da) {
      resulta=resulta*10+da;
    }
  }
  for (int i = 0; i < lenb; i++) {
    if ((B[i]-'0')==db) {
      resultb=resultb*10+db;
    }
  }
  std::cout << resulta+resultb << '\n';
  return 0;
}
