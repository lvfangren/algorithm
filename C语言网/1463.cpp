#include<iostream>
using namespace std;
void An(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<"sin("<<i;
        if(i!=n)
        {
            if(i%2)
            {
                cout<<"-";
            }
            else
            {
                cout<<"+";
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<")";
    }
}
void Sn(int n)
{
    for(int i=1;i<n;i++)
    {
        cout<<"(";
    }
    for(int i=1;i<=n;i++)
    {
        An(i);
        cout<<"+"<<n-i+1;
        if(i!=n)
        {
            cout<<")";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    Sn(n);
    return 0;
}
