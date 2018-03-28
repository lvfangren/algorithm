#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if (a==b) {
          std::cout << 0 << '\n';
          continue;
        }else{
          if((a==0&&b==2)||(a==1&&b==0)||(a==2&&b==1))
          {
              cout<<1<<endl;
              continue;
          }else
          {
              cout<<-1<<endl;
              continue;
          }
        }

    }
    return 0;
}
