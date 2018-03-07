#include <bits/stdc++.h>
using namespace std;
const int MAX=1005;
deque<int> wait;
deque<string> init;
std::vector<string> v[MAX];
int n,t1,t2,t3,t4,t5,q;
void run(int arg){
  string s;
  int lim=q;
  while (lim>0) {
    s=v[arg][a]
  }
}
int main(int argc, char const *argv[]) {
  string str;
  while (scanf("%d %d %d %d %d %d %d",&n,&t1,&t2,&t3,&t4,&t5,&q)!=EOF&&n) {
    for (int i = 1; i <= n; i++) {
      while (getline(cin,str)) {
        if (str=="") {
          continue;
        }
        v[i].push_back(str);
        if (v[i].back()=="end") {
          break;
        }
      }
      wait.push_back(i);
    }
    // memset();
    while (!wait.empty()) {
      int cur=wait.front();
      wait.pop_front();
      run(cur);
    }
  }
  return 0;
}
