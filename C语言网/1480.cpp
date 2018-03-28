#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char ch;
    std::cin >> a>>b>>ch;
    switch (ch) {
      case '+':
        std::cout << a+b << '\n';
        break;
      case '-':
        std::cout << a-b << '\n';
        break;
      case '*':
        std::cout << a*b << '\n';
        break;
      case '/':
        std::cout << a/b << '\n';
        break;
      case '%':
        std::cout << a%b << '\n';
        break;
      default:
            break;
    }
    return 0;
}
