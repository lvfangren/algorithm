// Runtime Error
// // #include <bits/stdc++.h>
// #include <iostream>
// #include <cstdio>
// #include <algorithm>
// #include <cstring>
// using namespace std;
// const int MAX=5000+20;
// int sta[MAX][MAX];
// int row,col,N;
// int judge(int t1,int t2,int t3,char t4){
//   if (t4=='t') {
//     if (sta[t1+t3][t2]==sta[t1][t2]) {
//       return 1+judge(t1+t3,t2,t3,t4);
//     }else{
//       return 0;
//     }
//   }
//   if (t4=='r') {
//     if ((sta[t1][t2+t3]==sta[t1][t2])) {
//       return 1+judge(t1,t2+t3,t3,t4);
//     }else{
//       return 0;
//     }
//   }
//   if (t4=='l') {
//     if ((sta[t1][t2-t3]==sta[t1][t2])) {
//       return 1+judge(t1,t2-t3,t3,t4);
//     }else{
//       return 0;
//     }
//   }
//   if (t4=='q') {
//     if ((sta[t1-t3][t2-t3]==sta[t1][t2])) {
//       return 1+judge(t1-t3,t2-t3,t3,t4);
//     }else{
//       return 0;
//     }
//   }
//   if (t4=='e') {
//     if (sta[t1-t3][t2+t3]==sta[t1][t2]) {
//       return 1+judge(t1-t3,t2+t3,t3,t4);
//     }else{
//       return 0;
//     }
//   }
//   if (t4=='a') {
//     if ((sta[t1+t3][t2-t3]==sta[t1][t2])) {
//       return 1+judge(t1+t3,t2-t3,t3,t4);
//     }else{
//       return 0;
//     }
//   }
//   if (t4=='d') {
//     if (sta[t1+t3][t2+t3]==sta[t1][t2]) {
//       return 1+judge(t1+t3,t2+t3,t3,t4);
//     }else{
//       return 0;
//     }
//   }
// }
// int main(int argc, char const *argv[]) {
//   // freopen("in.txt","r",stdin);
//   memset(sta,0,sizeof(sta));
//   while (scanf("%d %d",&row,&col)!=EOF&&(row||col)) {
//     std::cin >> N;
//     int x,y,maxx=0,maxy=0,s=1;
//     for (int i = 0; i < N; i++) {
//       std::cin >> x>>y;
//       sta[x][y]=1;
//       if (x>s) {
//         s=x;
//         maxx=x;
//         maxy=y;
//       }
//     }
//     int res1,res2,res3,res4,result1,result2,result=0;
//     int ssss=1;
//     for (int i = 1; i <=max(row,col) ; i++) {
//       // for (int temp1 = 1; temp1 < row; temp1++) {
//       //   for (int temp2 = 1; temp2 < col; temp2++) {
//       //
//       //   }
//       // }
//       res4=judge(maxx,maxy,i,'t');
//       res3=judge(maxx,maxy,i,'a')+judge(maxx,maxy,i,'e');
//       res2=judge(maxx,maxy,i,'r')+judge(maxx,maxy,i,'l');
//       res1=judge(maxx,maxy,i,'q')+judge(maxx,maxy,i,'d');
//       result1=max(res1,res2);
//       result2=max(res3,res4);
//       result=max(result1,result2);
//       ssss=max(ssss,result);
//     }
//     std::cout << ssss+1 << '\n';
//   }
//   // fclose(stdin);
//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;
const int MAX=5000;
int row,col;
struct PLANT{
  int x;
  int y;
}plants[MAX],plant;
  int search(PLANT temp,int dx,int dy){
    if ((temp.x+dx)>row||(temp.y+dy)>col) {
      return 2;
    }else if ((temp.x-dx)<row||(temp.y-dy)<col) {
      return 2;
    }else{
      temp.x+=dx;
      temp.y+=dy;
      return 2+search(temp,dx,dy);
    }
  }
  bool operator <(const PLANT &p1,const PLANT &p2)
  {
    if (p1.x==p2.x) {
      return p1.y<p2.y;
    }
    return p1.x<p2.x;
  }
int main(int argc, char const *argv[]) {
  std::cin >> row>>col;
  int N,max,step;
  int dx,dy,px,py;
  while (std::cin >> N) {
    for (int i = 0; i < N; i++) {
      std::cin >> plants[i].x>>plants[i].y;
    }
    sort(plants,plants+N);
    for (int i = 0; i < N; i++) {
      for (int j = i+1; j < N; j++) {
        dx=plants[j].x-plants[i].x;
        dy=plants[j].y-plants[i].y;
        px=plants[i].x-dx;
        py=plants[i].y-dy;
// 通过上面算出来的步长来判断，我们所选取的第一个点之前的点若步长间隔与1,2点间的相同且在田里，说明第二个点的选取不合理.
        if (px>=1&&px<=row&&py>=1&&py<=col) {
          continue;
        }
        if ((plants[i].x+(max-1)*dx)>row) {
          break;
        }
        py=plants[i].y=(max-1)*dy;
        if (py>col||py<1) {
          continue;
        }
        step=search(plants[j],dx,dy);
        if (step>max) {
          max=step;
        }
      }
    }
  }
  printf("%d\n", max==2?0:max);
  return 0;
}
