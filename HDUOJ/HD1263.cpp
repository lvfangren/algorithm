#include <iostream>
#include <map>
#include <stdio.h>
#include <string>
using namespace std;
string s1,s2;
int main()
{
//   freopen("in.txt","r",stdin);
    typedef map<string,map<string,int> > mmp;
    typedef map<string,int> mp;
    mmp p;
    int t,n,num,flag = 0;
    cin>>t;
    while(t--){
        p.clear();
        cin>>n;
        while(n--){
            cin>>s2>>s1>>num;
            p[s1][s2]+=num;
       }
       mmp::iterator iter1;
       mp::iterator iter2;
       for(iter1 = p.begin(); iter1!= p.end();iter1++){
            cout<<iter1->first<<endl;
            for(iter2 = iter1->second.begin();iter2 != iter1->second.end();iter2++){
                cout<<"   |----"<<iter2->first<<"("<<iter2->second<<")"<<endl;
            }
       }
       if(t){
        cout<<endl;
       }
    }

    return 0;
//fclose(stdin);
}
