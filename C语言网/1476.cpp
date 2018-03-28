#include<iostream>
using namespace std;
int main()
{
    int v1,v2,t,s,l;
    while(cin>>v1>>v2>>t>>s>>l)
    {
        int l1=0,l2=0;
        if(v1<v2)
        cout<<'T'<<endl;
        else if(v1==v2)
        cout<<'D'<<endl;
        else
        {
            while(l1<l&&l2<l)
            {
                while(l1-l2>=t)
                {
                    l2+=v2*s;
                }
                l1+=v1;
                l2+=v2;
            }
        }

        if(l1>l2)
        cout<<'R'<<endl;
        else if(l1==l2)
        cout<<'D'<<endl;
        else
        cout<<'T'<<endl;

        if(l2>=l)
        l2=l;
        cout<<l2/v2<<endl;
    }
    return 0;
}
