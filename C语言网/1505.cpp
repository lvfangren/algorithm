#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>
using namespace std;
int main(int argc, char const *argv[]) {
  char c[100];
  string s,word;
  std::vector<string> v;
  gets(c);
  s=c;
  istringstream ss(s);
  while (ss>>word) {
    v.push_back(word);
  }
  std::cout << v.size() << '\n';
  return 0;
}
