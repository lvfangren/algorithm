#include <bits/stdc++.h>
using namespace std;
const int MAX=1000;
int a[MAX+10];
struct Step{
  int x;
  int steps;
  Step(int xx,int y):x(xx),steps(y){}
};
queue<Step> q;
int main(int argc, char const *argv[]) {
  int N,K;
  std::cin >> N>>K;
  memset(a,0,sizeof(a));
  q.push(Step(N,0));
  a[N]=1;
  while (!q.empty()) {
    Step s=q.front();
    if (s.x==K) {
      std::cout << s.steps << '\n';
      return 0;
    }else{
      if (s.x-1>=0&&!a[s.x-1]) {
        q.push(Step(s.x-1,s.steps+1));
        a[s.x-1]=1;
      }
      if (s.x+1<=MAX&&!a[s.x+1]) {
        q.push(Step(s.x+1,s.steps+1));
        a[s.x+1]=1;
      }
      if (s.x*2<=MAX&&!a[s.x*2]) {
        q.push(Step(s.x*2,s.steps+1));
        a[s.x*2]=1;
      }
      q.pop();
    }
  }
  return 0;
}
