// #include <bits/stdc++.h>
# include<iostream>
using namespace std;
int int main(int argc, char const *argv[]) {
  int a,b,c;
  while (scanf("%d %d %d",&a,&b,&c)!=EOF) {
    int flag=0;
    for(int i=1;i<33;i++)
    {
      for (int j = 0; j < 33; j++) {
        /* code */
        for (int k = 0; k < 33; k++) {
          /* code */
          if ((3*i+a)==(5*j+b)==(7*k+c)) {
            /* code */
            flag=3*i+a;
            break;
          }
        }
        if(flag)
          break;
      }
      if(flag)
        break;
    }
  }

  return 0;
}
