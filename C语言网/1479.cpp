#include<iostream>
#include <cstring>
using namespace std;
int a[1006];
int b[1006];
int main()
{
    int n;
    cin>>n;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        b[j++]=a[i];
    }
    for(int i=0;i<j;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<j<<endl;
    return 0;
}
