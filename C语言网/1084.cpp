#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
using namespace std;


int main()
{
    int n;
    cin>>n;
    bool* ans=new bool[n];
    memset(ans,true,sizeof(ans));
    ans[0]=false;
    ans[1]=false;
    for(int i=2;i<n;i++){
        if(ans[i]){
            for(int j=i*2;j<n;j+=i){//倍数取整
                ans[j]=false;
            }
        }
    }
    int col = 0;
    for(int i=0;i<n;i++){
        if(ans[i]){
            cout<<i<<endl;
        }
    }
    return 0;
}
