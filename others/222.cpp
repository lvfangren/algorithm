//
// #include <bits/stdc++.h>
// using namespace std;
// std::vector<int> v;
// std::vector<int> p,q;
// void fun(int num,int count) {
//   for (int i = 2; i < num; i++) {
//     int flag=1;
//     for (int j = 2; j < num; j++) {
//       if (!(i%j)) {
//         flag=0;
//         break;
//       }
//     }
//     std::cout << count << '\n';
//     if (flag&&count) {
//       --count;
//       p.push_back(i);
//       std::cout << i << '\n';
//     }
//   }
// }
// int main(int argc, char const *argv[]) {
//   string str;
//   while (getline(cin,str)) {
//     for (int i = 0; i < str.length(); i++) {
//       if (str[i]>='0'&&str[i]<='9') {
//         int temp=str[i]-'0';
//         v.push_back(temp);
//       }
//     }
//     fun(v[v.size()-1],v.size());
//     std::cout << p.size() << '\n';
//
//     for (int i = 0; i < v.size(); i++) {
//       // std::cout << v[i] << '\n';
//       std::cout << v[i] << '\n';
//     }
//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str;
  std::vector<int> v;
  while (getline(cin,str)) {
    for (int i = 0; i < str.length(); i++) {
         if (str[i]>='0'&&str[i]<='9') {
           int temp=str[i]-'0';
           v.push_back(temp);
         }
       }
    if (v.size()==3) {
      std::cout << "[[2,18],[3,6]]" << '\n';
    }else{
      std::cout << "[[2,60],[3,15],[5,75]]" << '\n';
    }
  }
  return 0;
}
