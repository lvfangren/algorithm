#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int len1=str1.length();
    int len2=str2.length();
    if(len1!=len2)
    {
        cout<<"1"<<endl;
    }
    else
    {

        if(str1==str2)
        {
            cout<<"2"<<endl;
            return 0;
        }
            for(int i=0;i<str1.length();i++)
            {
                str1[i]=toupper(str1[i]);
                str2[i]=toupper(str2[i]);//将小写字母转换为大写字母 再进行比较
            }
            if(str1==str2)
            cout<<"3"<<endl;
            else
            cout<<"4"<<endl;
    }
    return 0;
}
