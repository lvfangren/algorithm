# include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int x;
  while(scanf("%d",&x)!=EOF)
  {
    int temp=x,count=0;
    while(temp/10)
    {
      ++count;
      temp%=10;
    }
    cout<<count<<endl;
  }
  return 0;
}
