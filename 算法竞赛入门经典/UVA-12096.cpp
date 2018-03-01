//RE 

// #include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <set>
#include <map>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
#define  All(x) x.begin(),x.end()
#define  INS(x) inserter(x,x.begin())
typedef set<int>Set;
std::map<Set, int> IDcache;
std::vector<Set> Setcache;
int ID(Set temp){
  if (IDcache.count(temp)==0) {
    return  IDcache[temp];
  }
  Setcache.push_back(temp);
  return IDcache[temp]=Setcache.size()-1;
}
int main(int argc, char const *argv[]) {
  int n,m;
  string str;
  std::cin >> n;
  stack<int>s;
  for (int i = 0; i < n; i++) {
    cin>>m;
    for (int j = 0; j < m; j++) {
      std::cin >> str;
      if (str[0]=='P') {
        s.push(ID(Set()));
      } else if(str[0]=='D'){
        s.push(s.top());
      }else{
        Set x1=Setcache[s.top()];
        s.pop();
        Set x2=Setcache[s.top()];
        s.pop();
        Set x;
        if (str[0]=='U') {
            set_union(All(x1),All(x2),INS(x));
        }
        if (str[0]=='I') {
            set_intersection(All(x1),All(x2),INS(x));
        }
        if (str[0]=='A') {
          x=x2;
          x.insert(ID(x1));
        }
        s.push(ID(x));
      }
      std::cout << Setcache[s.top()].size() << '\n';
    }
    std::cout << "***" << '\n';
  }
  return 0;
}
