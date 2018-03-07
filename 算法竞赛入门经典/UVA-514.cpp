// #include <bits/stdc++.h>
// using namespace std;
// const int MAX=1000+10;
// int trage[MAX];
// int main(int argc, char const *argv[]) {
//   int A=1,B=1;
//   int n;
//   int flag=1;
//   stack<int>C;
//   while (scanf("%d", &n)!=EOF) {
//     for (int i = 1; i <= n; i++) {
//       scanf("%d", &trage[i]);
//     }
//     if (trage[1]) {
//
//     while (B<=n) {
//       if (A==trage[B]) {
//         A++;
//         B++;
//       } else if (!C.empty()&&(C.top()==trage[B])) {
//         B++;
//         C.pop();
//       }else if(A<=n){
//         A++;
//       }
//       else{
//         flag=0;
//         break;
//       }
//     }
//   }else{
//     std::cout << '\n';
//   }
//     printf("%s\n", flag ? "Yes":"No");
//   }
//   return 0;
// }

#include <iostream>
#include<stack>
using namespace std;
#define N 300000
int target[N];
//用来记录希望的出站顺序
int main()
{
   int n;
   //当输入的数字不为零时，进入while循环
   while(cin>>n&&n){
   stack<int> s;
   //当输入的数字不为零时，n不变，重新输入一组新的target
   while(cin>>target[0]&&target[0]){
   for(int i=1;i<n;i++)
   cin>>target[i];
   int a=1,b=0;
   int ok=1;
   while(b<n){
   if(a==target[b])
   {
       ++a;++b;
       //情况一
   }
   else if((!s.empty())&&target[b]==s.top())
   {
       s.pop();
       ++b;
       //情况二
   }
   else if(a<=n)
   {
       s.push(a++);
       //情况三
   }
   else
   {
       ok=0;
       break;
       //都不满足，只能说明不匹配
       //ok用来标记是否匹配
   }
   }
   if(ok)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
   }
   cout<<endl;
   //删掉这一句会PE
   }
   return 0;
}
