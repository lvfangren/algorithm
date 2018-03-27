#include<iostream>
using namespace std;
int main()
{
    int a;
    string str="";
    while(scanf("%d", &a)!=EOF)
      str+=a;
    std::cout << str << '\n';  
    return 0;
}
