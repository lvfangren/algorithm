#include <iostream>
#include <sstream>
#include <map>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[]) {
  string s,ss;
  std::map<string, int> mm;
  char a[100];
  gets(a);
  s=a;
  istringstream sss(s);
  while (sss>>ss) {
    mm[ss]++;
  }
  std::cout << mm.size() << '\n';
  return 0;
}
