#include <iostream>
#include <string>
#include <string.h>
#include <map>
#include <stdio.h>
using namespace std;
string s;
char s1[100000],s2[100000];
char str[100000];
int main()
{
    freopen("in.txt","r",stdin);
    typedef map<string,string> mmp;
    mmp mp;
    mmp::iterator iter;
    int i;
    char ch;
    for(i = 0;i<2;i++){
        if(i==0){
            cin>>s1;
            if(strcmp(s1,"START") == 0){
                while(cin>>s1){
                    if(strcmp(s1,"END")==0){
                        break;
                    }else{
                        cin>>s2;
                        mp[s2] = s1;
                    }
                }
            }
//            for(iter=mp.begin();iter!=mp.end();iter++)
//				cout<<iter->first<<"\t"<<iter->second<<endl;
        }else if(i == 1){
            cin>>s1;
            if(strcmp(s1,"START") == 0){
                    while(gets(str)){
                        int len = strlen(str),i,judge =2;
                        if(strcmp(str,"END")==0){
                            break;
                        }
                        for(i = 0;i<len;i++){
                            while(str[i]>='a'&&str[i]<='z'){
                                s+=str[i];
                                i++;
                                judge = 1;
                            }
                            if(judge==1){
                                if(mp.count(s)){
                                    iter = mp.find(s);
                                    cout<<iter->second;
                                }else{
                                    if(s.compare("END") == 0){
                                        break;
                                    }else{
                                        cout<<s;
                                    }
                                }
                                judge = 0;
                                s.clear();
                            }
                            cout<<str[i];
                        }
                        if(judge == 1||judge ==0){
                           printf("\n");
                        }
                    }
            }
        }
    }
    return 0;
    fclose(stdin);
}
