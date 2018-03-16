#include <bits/stdc++.h>
using namespace std;
std::map<int, int> maps;
int arr[15];
int N;
int flag1=1,flag2=1;
int maxs=1;
void fun(int sss) {
  for (int i = 0; i < N; i++) {
      flag1=1;
      flag2=1;
      if (i!=0) {
        maxs+=sss;
      }
      for (int j = 0; j < N; j++) {
        if(maxs%arr[j]!=maps[arr[j]]){
          // std::cout << "csavdsvds" << '\n';
          flag1=0;
        }
        if (maps[arr[i]]%arr[j]!=maps[arr[j]]) {
          flag2=0;
        }
        if((flag1+flag2)==0){
          break;
        }
      }
      if (flag1) {
        std::cout << maxs << '\n';
        return;
      }else if(flag2){
        std::cout << maps[arr[i]] << '\n';
        return;
      }

}
int main(int argc, char const *argv[]) {
  std::cin >> N;
  int a,b,ss;
  memset(arr,0,sizeof(arr));
  for (int i = 0; i < N; i++) {
    cin>>a>>b;
    maps[a]=b;
    maxs=max(maxs,a+b);
    ss=maxs==(a+b)?b:1;
    arr[i]=a;
    sort(arr,arr+N);
  }
  fun(ss);
  return 0;
}

// map<int,int> ms;
// int N;
// int p,m;
// int maxs=1;
// int te[15];
// int xx=ms[maxs],flag=1;
// void fun() {
//   for (int i = 0; i < N; i++) {
//     for (int j = 0; j < N; j++) {
//       if (xx%) {
//
//       }
//     }
//   }
//   for (int j=0;j<N;j++) {
//     xx+=maxs;
//     flag=1;
//     for (int i = 0; i < N; i++) {
//       if (xx%te[i]!=ms[te[i]]) {
//         // xx+=maxs;
//         flag=0;
//         break;
//       }
//     }
//     if (flag) {
//       break;
//     }
//   }
// }
// int main(int argc, char const *argv[]) {
//   scanf("%d", &N);
//   // int *te=new int[N];
//   memset(te,0,sizeof(te));
//   for (int i=0;i<N;i++) {
//     std::cin >>p>>m;
//     maxs=max(maxs,p);
//     ms[p]=m;
//     te[i]=p;
//   }
//   fun();
//   std::cout << xx << '\n';
//   return 0;
// }
