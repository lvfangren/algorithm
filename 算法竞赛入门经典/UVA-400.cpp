// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
const int MAXCOL=60;
string fileName[105];
void print(const string& s,int len,char extra)
{
  std::cout << s ;
  for (int i = 0; i < len-s.length(); i++) {
    std::cout << extra ;
  }
}
int main(int argc, char const *argv[]) {
  freopen("in.txt","r",stdin);
  int N;
  int row,col;
  while (scanf("%d", &N)!=EOF&&N) {
    int M=0;
    for (int i = 0; i < N; i++) {
      std::cin >> fileName[i];
      M=max(M,(int)fileName[i].length());
    }
    col=(MAXCOL-M)/(M+2)+1;
    row=(N-1)/col+1;
    print("",60,'-');
    std::cout << '\n';
    sort(fileName,fileName+N);
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        int idx=j*row+i;
        if (idx<N) {
          print(fileName[idx],j==col-1?M:M+2,' ');
        }
      }
      std::cout << '\n';
    }
  }
  fclose(stdin);
  return 0;
}
