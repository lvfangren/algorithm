// #include <bits/stdc++.h>
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;
// 用v来存储开始时的初始单词，不做处理的
vector<string> v;
// 用m来进行中转
std::map<string, int> m;
// 单词标准化
string repe(const string& s){
  string temp=s;
  for (int i = 0; i < temp.length(); i++) {
    temp[i]=tolower(temp[i]);
  }
  sort(temp.begin(), temp.end());
  return temp;
}
int main(int argc, char const *argv[]) {
  // freopen("in.txt","r",stdin);
  string str,temp;
  while (cin>>str) {
    if(str[0]=='#')
    {
      break;
    }else{
      v.push_back(str);
      string r=repe(str);
      if (!m.count(r)) {
        m[r]=0;
      }
      m[r]++;
    }
  }
  // 用v2来存储结果
  std::vector<string> v2;
  for (int i = 0; i < v.size(); i++) {
    if(m[repe(v[i])]==1){
      v2.push_back(v[i]);
    }
  }
  // 按小道大排序
  sort(v2.begin(),v2.end());
  for (int i = 0; i < v2.size(); i++) {
    cout<<v2[i]<<endl;
  }
  // fclose(stdin);
  return 0;
}
