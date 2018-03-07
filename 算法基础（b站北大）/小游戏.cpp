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
  } else if (!arr[tmp1][tmp2+1]&&(tmp1+2)<=h) {
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
  int x1,y1,x2,y2;
  int ino1=0,ino2=0;
  char m;
  while (scanf("%d", &w,&h)!=EOF&&(w||h)) {
    for (int i = 0; i < w; i++) {
      for (int j = 0; j < h; j++) {
        scanf("%s", &m);
        if (m==' ') {
          arr[i][j]=1;
        }
      }
    }
    std::cout << "Borad #"<<++ino1<< '\n';

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
