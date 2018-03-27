// TLE
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int fun(int m){
//   if (m<=4) {
//     return m;
//   }else{
//     return fun(m-3)+fun(m-1);
//   }
// }
// int main(int argc, char const *argv[]) {
//   int n;
//   while (scanf("%d", &n)&&n) {
//     std::cout << fun(n) << '\n';
//   }
//   return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n,i;
    int f1, f2, f3, fn;
    while(cin>>n&&n!=0)
    {
        //下面求第n年有几头牛
        f1=1;
        f2=2;
        f3=3;
        if(n==1)
            cout<<f1<<endl;
        else if(n==2)
            cout<<f2<<endl;
        else if(n==3)
            cout<<f3<<endl;
        else
        {
            for(i=4; i<=n; i++)
            {
                fn=f3+f1;
                f1=f2;  //f1代表前3年
                f2=f3;  //f2代表前2年
                f3=fn;  //f3代表前1年
            }
            cout<<fn<<endl;
        }
    }
    return 0;
}
