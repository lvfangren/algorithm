#include <iostream>
#include <cstring>
using namespace std;
string str="";
void fun2(int num) {
  switch (num) {
    case 0:
      str="ling "+str;
      // default
        break;
    case 1:
      str="yi "+str;
      break;
    case 2:
      str="er "+str;
      break;
    case 3:
      str="san "+str;
      break;
    case 4:
      str="si "+str;
      break;
      case 5:
        str="wu "+str;
        break;
      case 6:
        str="liu "+str;
        break;
      case 7:
        str="qi "+str;
        break;
      case 8:
        str="ba "+str;
        break;
      case 9:
        str="jiu "+str;
        break;
      default:
        break;
  }
}
void fun(int len,string n){
  int result=0;
  for (int i = 0; i < len; i++) {
    result=result+n[i]-'0';
  }
  int tem=result;
  while (tem) {
    int ans=tem%10;
    fun2(tem%10);
    tem/=10;
  }
}

int main(int argc, char const *argv[]) {
  string n;
  std::cin >> n;
  int len=n.length();
  fun(len,n);
  std::cout << str.substr(0,str.length()-1) << '\n';
  return 0;
}
