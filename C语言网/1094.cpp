#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;cin>>n;
    cin.get();
    vector<string> str;
string s;
    for(int i=0;i<n;++i){
        getline(cin,s);
        str.push_back(s);
    }
    while(cin>>s)
       str.push_back(s);
    for (int i = 0; i < str.size(); i++) {
      std::cout << str[i]<< '\n'<<endl;
    }
return 0;
}
