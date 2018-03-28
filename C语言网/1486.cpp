#include<iostream>
using namespace std;
int main()
{
    double a,b;
    double x;
    cin>>a>>b;
    if(b>0)
        x=-(b/a);
    else{
        x=b/a;
    }
    printf("%.2lf\n",x);
    return 0;
}
