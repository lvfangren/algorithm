// // #include <bits/stdc++.h>
// #include <map>
// #include <iostream>
// #include <queue>
// #include <cstdio>
// using namespace std;
// const int MAX=1000+10;
// // set<int>team;
// int main(int argc, char const *argv[]) {
//   int n1=0,t;
//   while (scanf("%d",&t)==1&&t) {
//     printf("Scenario #%d\n",++n1);
//     std::map<int, int> team;
//     for (int i = 0; i < t; i++) {
//       int n,x;
//       // std::cin >>n ;
//       scanf("%d",&n);
//       while (n--) {
//         scanf("%d", &x);
//         team[x]=i;
//       }
//     }
//     queue<int>q,q2[MAX];
//     for (;;) {
//       int x;
//       char str[10];
//       scanf("%s", str);
//       if (str[0]=='S') {
//         break;
//       }else
//       if (str[0]=='D') {
//         cout<<q2[q.front()].front();
//         q2[q.front()].pop();
//       }else if(str[0]=='E'){
//         // cin>>x;
//         scanf("%d", &x);
//         int t=team[x];
//         if (q2[t].empty())
//           q.push(t);
//         q2[t].push(x);
//       }
//     }
//     printf("\n");
//   }
//   return 0;
// }
#include<cstdio>
#include<queue>
#include<map>
using namespace std;
const int maxt = 1000 + 10;
int main() {
  int t, kase = 0;
  while(scanf("%d", &t) == 1 && t) {
    printf("Scenario #%d\n", ++kase);
    //记录所有人的团队编号
    map<int, int> team;             //team[x]表示编号为x的人所在的团队编号
    for(int i = 0; i < t; i++) {
      int n, x;
      scanf("%d", &n);
      while(n--) { scanf("%d", &x); team[x] = i; }
    }
    //模拟
    queue<int> q, q2[maxt];         //q是团队的队列，而q2[i]是团队i成员的队列
    for(;;) {
      int x;
      char cmd[10];
      scanf("%s", cmd);
      if(cmd[0] == 'S') break;
      else if(cmd[0] == 'D') {
        int t = q.front();
        printf("%d\n", q2[t].front()); q2[t].pop();
        if(q2[t].empty()) q.pop(); //团体t全体出队列
      }
      else if(cmd[0] == 'E') {
        scanf("%d", &x);
        int t = team[x];
        if(q2[t].empty()) q.push(t); //团队t进入队列
        q2[t].push(x);
     }
    }
    printf("\n");
  }
  return 0;
}
