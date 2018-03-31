#include <bits/stdc++.h>
using namespace std;
int dp[1050][1050];
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=a.size();i++)
        {
            for(int j=1;j<=b.size();j++)
            {
                if(a[i-1]==b[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        cout<<dp[a.size()][b.size()]<<endl;
    }
    return 0;
}  
