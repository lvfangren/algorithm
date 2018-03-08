#include <bits/stdc++.h>
using namespace std;
int cmp(int a,int b){
  return a>b;
}
int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  int *p=new int[N];
  for (int i = 0; i < N; i++) {
      std::cin >> p[i];
  }

  int q,i,j;
  std::cin >> q;
  while (q--) {
    std::cin >> i>>j;

    // int *tem=new int[j-i+1];
    int result=0;
    for(int temp1=i;temp1<=j;temp1++){
      result=max(result,p[temp1]);
    }
  //   sort(tem,tem+(j-i+1));
    std::cout << result << '\n';
  }
  return 0;
}
