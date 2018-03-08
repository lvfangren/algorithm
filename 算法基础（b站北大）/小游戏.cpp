#include <bits/stdc++.h>
using namespace std;
int arr[78][78];
int w,h;
int fun(int tmp1,int tmp2,int tmp3,int tmp4){
  if (tmp1==tmp3&&tmp2==tmp4) {
    return 1;
  }else{
  if (!arr[tmp1+1][tmp2]&&(tmp1+1)<=w) {
    fun(tmp1+1,tmp2,tmp3,tmp4);
  }else if (!arr[tmp1-1][tmp2]&&(tmp1-1)>=0) {
    fun(tmp1-1,tmp2,tmp3,tmp4);
  } else if (!arr[tmp1][tmp2+1]&&(tmp2+2)<=h) {
    fun(tmp1,tmp2+1,tmp3,tmp4);
  }else if (!arr[tmp1][tmp2-1]&&(tmp2-1)>=0) {
    fun(tmp1,tmp2-1,tmp3,tmp4);
  } else{
    return 0;
  }
  }
}
int main(int argc, char const *argv[]) {
  freopen("in.txt","r",stdin);
  memset(arr,0,sizeof(arr));
  int x1,y1,x2,y2;
  int ino1=0,ino2=0;
  char m;
  while (scanf("%d", &w,&h)!=EOF&&(w||h)) {
    std::cout << "Borad #"<<++ino1<< '\n';
    for (int i = 0; i < w; i++) {
        getchar();
        for (int j = 0; j < h; j++) {
          arr[i][j]=!getchar()?1:0;
        }
    }

    while (scanf("%d %d %d %d", &x1,&y1,&x2,&y2)!=EOF&&(x1||y1||x2||y2)) {
      std::cout << "Pair :"<<++ino2;
      if(fun(x1,y1,x2,y2)){
        std::cout << "true" << '\n';
      }else{
        std::cout << "impossible." << '\n';
      }
    }
  }
  fclose(stdin);
  return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// const int MAX=75;
// char board[MAX+2][MAX+2];
// int minstep,w,h,to[4][2]={{0,1},{-1,0},{0,-1},{0,1}};
// bool mark[MAX+2][MAX+2];
// void seach(int now_x,int now_y,int end_x,int end_y,int step,int f){
//   if (step>minstep) {
//     return;
//   }
//   if (now_x==end_x&&now_y==end_y) {
//     if (minstep>step) {
//       minstep=step;
//       return;
//     }
//   }
//   for (int i = 0; i < 4; i++) {
//     int x=now_x+to[i][0];
//     int y=now_y+to[i][1];
//      if((x>-1)&&(x<w+2)&&(y>-1)&&(y<h+2)&&(((board[x][y]=='')&&(mark[x][y]==false))||((x==end_x)&&(y==end_y)&&board[x][y]=='X'))) {
//       /* code */
//     }
//     f=i;
//   }
// }
// int main(int argc, char const *argv[]) {
//   freopen("in.txt","r",stdin);
//
//   fclose(stdin);
//   return 0;
// }
