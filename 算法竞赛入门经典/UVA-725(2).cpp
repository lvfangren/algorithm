# include<bits/stdc++.h>
using namespace std;
int judge(int x,int y)
{
  int temp[11],result=0;
  memset(temp,0,sizeof(temp));  //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  if (y>98765) {
    return 0;
  }
  if (x<10000) {
    temp[0]=1;
  }
  while (x) {
    temp[x%10]=1;
    x/=10;
  }
  while (y) {
    temp[y%10]=1;
    y/=10;
  }
  for (int i = 0; i < 10; i++) {
    result+=temp[i];
  }
  return result==10;
}
int main(int argc, char const *argv[]) {
  int n;
  while (scanf("%d",&n)!=EOF&&n) {
    int flag=1;
    for (int i = 1234; i < 5000; i++) {
      if (judge(i,i*n)) {
        printf("%5d / %05d =%d\n",i*n,i,n);
        flag=0;
      }
    }
    if (flag) {
      std::cout << "There are no solutions for " <<n<<"."<< '\n';
    }
  }
  return 0;
}
