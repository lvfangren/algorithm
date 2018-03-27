#include<iostream>
using namespace std;
int main()
{
    long long n;
    while (cin>>n) {
      long long temp=n,sum=0;
      while (temp) {
        sum+=temp%10;
        temp/=10;
      }
      std::cout << sum << '\n';
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     string n;
//     while (cin>>n) {
//       int sum=0;
//       for (int i=0;i<n.length();i++) {
//         sum+=(n[i]-'0');
//       }
//       std::cout << sum << '\n';
//     }
//     return 0;
// }
