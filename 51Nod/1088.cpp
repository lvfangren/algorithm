#include <bits/stdc++.h>
using namespace std;
const int MAX=1000+10;
char a[MAX];
char res[MAX*2+1];
int main(int argc, char const *argv[]) {
  cin>>a;
  int len=strlen(a);
  int j=0;
  res[0]='#';
  for (int i = 1; i < 2*len+1; i++) {
    if (i%2) {
      res[i]=a[j++];
    }else{
      res[i]='#';
    }
  }
  int n=len,count=1;
  for(int i=0;i<len;i++)
  {
    if (res[n+count]==res[n-count]) {
      count++;
    }else{
      break;
    }
  }
  if (count==1) {
    std::cout << count << '\n';
  }else{
    std::cout << count-1 << '\n';
  }
  return 0;
}
