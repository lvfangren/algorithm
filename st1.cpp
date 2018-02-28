# include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string line;
  while (getline(cin,line)) {
    int sum=0,x;
    stringstream ss(line);
    while (ss>>x) {
      sum+=x;
    }
    std::cout << sum << '\n';
  }
  return 0;
}
