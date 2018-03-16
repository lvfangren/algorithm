#include <bits/stdc++.h>
using namespace std;
void init(string ch1,string ch2){
  int len1=ch1.length();
  int len2=ch2.length();
  int *A=new int[len1];
  int *B=new int[len2];
  int *tem=new int[max(len1,len2)+1];
  int *result=new int[max(len1,len2)+5];
  for (int i = 0; i < len1; i++) {
    A[i]=ch1[i]-'0';
  }
  for (int i = 0; i < len2; i++) {
    B[i]=ch2[i]-'0';
  }
  int temp=0;
  for (int i = 0; i < max(len1,len2)+1; i++) {
    result[i]=temp+(A[i]*B[i])%10;
    temp=(A[i]*B[i])/10;
  }
  for (int i = max(len1,len2)-1; i >= 0; i--) {
    std::cout << result[i];
  }
  std::cout << '\n';
}
int main(int argc, char const *argv[]) {
  string s1,s2;
  std::cin >> s1>>s2;
  init(s1,s2);
  return 0;
}
