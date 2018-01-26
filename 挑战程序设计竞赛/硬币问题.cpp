#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int a[6],A;
  int b[6]={1,5,10,50,100,500};
  for(int i=0;i<6;i++)
  {
    cin>>a[i];
  }
  cin>>A;
  int count=0,temp=A;
  for (int i = 5; i >=0; i--) {
    if (temp!=0) {
      int t=min(a[i],temp/b[i]);
      temp-=t*b[i];
      count+=t;
    }
  }
  std::cout << count << '\n';
  return 0;
}
