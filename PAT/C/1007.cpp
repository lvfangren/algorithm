#include <bits/stdc++.h>
using namespace std;
const int MAX=10000+10;
int prime[MAX];
int num=0,flag=1;
void fun(int arg) {
  for(int m=2; m<=arg; m++)
      {
          int k=sqrt(m);
          for(int i=2; i<=k; i++)
              if(m%i==0)
              {
                  flag=0;
                  break;
              }
          if(flag)
          {
            prime[num++]=m;
          }
          flag=1;
      }
}
int main(int argc, char const *argv[]) {
  int resoult=0;
  int n;
  std::cin >> n;
  memset(prime,0,sizeof(prime));
  fun(n);
  int i = 0,j=1;
  for (; i < num-1; i++,j++) {
    if (prime[j]-prime[i]==2) {
      resoult++;
    }
  }
  std::cout << resoult << '\n';
  return 0;
}
