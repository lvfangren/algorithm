# include<iostream>
using namespace std;
#define  MAXN 10000
int memo[MAXN+1];
int fib(int n){
  if (n==1||n==0) {
    return 1;
  }
  if (memo[n]!=0) {
    return memo[n];
  }
  return memo[n]=fib(n-1)+fib(n-2);
}
int main(int argc, char const *argv[]) {
  int x=9;
  printf("%d\n", fib(x));
  return 0;
}
