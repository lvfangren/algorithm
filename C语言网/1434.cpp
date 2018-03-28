#include<iostream>
using namespace std;
int main()
{
    int n;
    int flag=0;
    cin>>n;
    for(int i=1;i<10;i++)
        for(int j=0;j<10;j++)
            for(int k=0;k<10;k++)
            {

                 if(2*i+2*j+k==n)
                 {
                   cout<<i<<j<<k<<j<<i<<endl;
                   flag=1;
                 }

            }
    for(int i=1;i<10;i++)
        for(int j=0;j<10;j++)
            for(int k=0;k<10;k++)
                {

                 if(2*i+2*j+2*k==n)
                 {
                   cout<<i<<j<<k<<k<<j<<i<<endl;
                   flag=1;
                 }

                }
                if(!flag) cout<<"-1"<<endl;
                return 0;
}
