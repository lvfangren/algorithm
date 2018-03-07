// TLE
#include <bits/stdc++.h>
using namespace std;
const int row=5;
const int col=6;
int init[row+1][col+2],sta[row+1][col+2];
void inits() {
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= col; j++) {
      scanf("%d", &init[i][j]);
    }
  }
}
void print(int i)
{
  std::cout << "PUZZLE #" << i<< '\n';
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= col; j++) {
      // if (j!=col) {
        printf("%d ", sta[i][j]);
      // }
    }
    std::cout << '\n';
  }
}
bool guess() {
  for (int i = 1; i < row-1; i++) {
    for (int j = 1; j < col+1; j++) {
      sta[i+1][j]=(init[i][j]+sta[i][j]+sta[i][j-1]+sta[i][j+1]+sta[i-1][j])%2;
    }
  }
  for (int i = 1; i < col+1; i++) {
    if ((sta[5][i-1]+sta[5][i]+sta[5][i+1]+sta[4][i])%2!=init[5][i]) {
      return false;
    }
  }
  return true;
}
void numerate(){
  int c;
  while (guess()==false) {
    sta[1][1]++;
    c=1;
    if (sta[1][c]>1) {
      sta[1][c]=0;
      c++;
      sta[1][c]++;
    }
  }
  return ;
}
// void sub(int x,int y){
//   if (x-1>=1) {
//     init[x-1][y]=!init[x-1][y];
//   }else if (y-1>=1) {
//     init[x][y-1]=!init[x][y-1];
//   }else if (y+1<=row) {
//     init[x][y+1]=!init[x][y+1];
//   }else if (x+1<=col) {
//     init[x+1][y]=!init[x+1][y];
//   }
// }
int main(int argc, char const *argv[]) {
  freopen("in.txt","r",stdin);
  memset(sta,0,sizeof(sta));
  int n;
  while (std::cin >> n&&n) {
    for (int i = 1; i <= n; i++) {
      inits();
      numerate();
      print(i);
    }
  }
  fclose(stdin);
  return 0;
}
