#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
std::map<int, int> ma;
int main(int argc, char const *argv[]) {
  int n;
  int m;
  std::cin >> n;
  while (scanf("%d", &m)!=EOF) {
    ma[m]++;
  }
  // sort(ma.begin(),ma.end());
  std::map<int, int>::iterator ite;
  int resu1=ma.begin()->first,resul2=0,result=0;
  for ( ite=ma.begin(); ite!=ma.end(); ite++) {
    if (ite->second>=2) {
      resul2=ite->first;
    }
    if (ite->first==resu1) {
      resu1++;
    }else{
      result=resu1;
    }
  }
  std::cout << result<<" "<<resul2 << '\n';
  return 0;
}
