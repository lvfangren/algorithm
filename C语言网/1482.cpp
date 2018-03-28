#include<iostream>
#include<cstdio>
using namespace std;
int a[100][100];
int main()
{
    int N;
    cin>>N;
  for(int i=0;i<100;i++)
  {
      a[0][i]=0;
      a[i][0]=0;
  }
  a[1][1]=1;
  a[2][1]=1;
  a[2][2]=1;
  for(int i=3;i<100;i++)
  {
      for(int j=1;j<100;j++)
      {
          a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
  }
   for(int i=1;i<N+2;i++)
  {
      for(int j=0;j<N*3-3*i+3;j++)
      {
          cout<<" ";
      }

    for(int k=0;k<N+2;k++)
    {
        if(a[i][k]!=0)
      printf("%3d   ",a[i][k]);
    }
    if(i<N+1)
    cout<<endl;
  }
    std::cout << '\n';
    return 0;
}
