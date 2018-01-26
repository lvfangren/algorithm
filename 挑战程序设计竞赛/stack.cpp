#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  cout << s.top() << '\n';
  queue<int> que;
  que.push(1);
  que.push(2);
  que.push(3);
  std::cout << que.front() << '\n';
  return 0;
}
