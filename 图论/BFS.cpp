#include <bits/stdc++.h>
using namespace std;
int visited[6]={0,};
int a[5][5]={{0,1,1,0,0},{0,0,1,1,0},{0,1,1,1,0},{1,0,0,0,0},{0,0,1,1,0}};
void BFS(int start){
    queue<int> Q;
    Q.push(start);
    visited[start]=1;
    while (!Q.empty()) {
      int front=Q.front();
      std::cout << front <<" ";
      Q.pop();
      for (int i = 1; i <=5; i++) {
        if (!visited[i]&&a[front-1][i-1]==1) {
          visited[i]=1;
          Q.push(i);
        }
      }
    }

}
int main(int argc, char const *argv[]) {
  for (int i = 1; i <=5; i++) {
    if (visited[i]==1) {
      continue;
    }
    BFS(i);
  }
  return 0;
}
