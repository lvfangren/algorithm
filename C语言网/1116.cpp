#include<iostream>
using namespace std;
int main()
{
    string str;
    while (std::cin >> str) {
      int len=str.length();
      int resu=0;
      int i = 0;
      for (; i < len; i++) {
        if (str[i]=='.') {
          resu=0;
          continue;
        }else{
          if (str[i]>='0'&&str[i]<='9') {
            resu=resu*10+str[i]-'0';
          }else{
            std::cout << "N" << '\n';
            break;
          }
          if (resu>255) {
            std::cout << "N" << '\n';
            break;
          }
        }
      }
      if (i>=len) {
        std::cout << "Y" << '\n';
      }
    }
    return 0;
}
