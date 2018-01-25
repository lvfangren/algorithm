# include<bits/stdc++.h>
using namespace std;
# define N 100
// 很鸡贼的数学公式a^2+b^2+c^2>=(abc)^2
int main(int argc, char const *argv[]) {
  int  num,a,b,c;
  while(scanf("%d",&num)!=EOF&&num)
  {
    bool flag=true;
    for(int i=1;i<=N;i++)
    {
      for(int j=i;j<=N;j++)
      {
        for(int k=j;k<=N;k++)
        {
          if((i*i+j*j+k*k)==num&&flag)
          {
            cout<<i<<" "<<j<<" "<<k<<endl;  
            flag=false;
            break;
          }
        }
        if(!flag)
        {
        	break;
		}
      }
      if(!flag)
    	{
        	break;
		}
    }
  } 
  return 0;
}
