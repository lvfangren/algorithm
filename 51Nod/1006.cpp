// DP
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAXN = 1010;
char str1[MAXN];
char str2[MAXN];
int dp[MAXN][MAXN];
char path[MAXN];
int plen;

void lcs(int len1, int len2)
{
    for(int i = 0; i < len1; ++i)
    {
        for(int j = 0; j < len2; ++j)
        {
            if(str1[i] == str2[j])
                dp[i+1][j+1] = dp[i][j]+1;

            else
                dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
        }
    }
}

int main()
{
    //freopen("out","w",stdout);
    scanf(" %s %s",str1,str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    lcs(len1,len2);
    int i = len1-1;
    int j = len2-1;
    plen = 0;
    //记录路径
    while(i >= 0 && j >= 0)
    {
        if(str1[i] == str2[j])
        {
            path[plen++] = str1[i];
            --i;
            --j;
        }
        else if(dp[i+1][j] >= dp[i][j+1])//说明lcs是str1[0~i]和str2[0~j-1]的lcs
            --j;
        else
            --i;
    }
    for(int i = plen-1; i >= 0; --i)
        printf("%c",path[i]);
    printf("\n");
    return 0;
}
