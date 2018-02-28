#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  stack<int> s;
  queue<int> q;
  s.push(1);
  s.push(2);
  s.push(3);
  q.push(1);
  q.push(2);
  q.push(3);
  cout << s.top() << '\n';
  std::cout << q.front() << '\n';
  s.pop();
  q.pop();
  cout << s.top() << '\n';
  std::cout << q.front() << '\n';
  return 0;
}
