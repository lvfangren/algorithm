// #include <bits/stdc++.h>

#include<iostream>
#include<string>
#include<set>
#include<sstream>
using namespace std;
set<string> dict; //string 集合
int main() {
  freopen("in.txt","r",stdin);
  string s, buf;
  while(cin >> s) {
  for(int i = 0; i < s.length(); i++)
    if(isalpha(s[i])) s[i] = tolower(s[i]); else s[i] = ' ';
  stringstream ss(s);
  while(ss >> buf) dict.insert(buf);
}
for(set<string>::iterator it = dict.begin(); it != dict.end(); ++it)
  cout << *it << "\n";
fclose(stdin);
return 0;
}
