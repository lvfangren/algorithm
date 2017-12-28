#include <iostream>    
#include <algorithm>   
#define MAX 101    
using namespace std;   
int D[MAX][MAX];    
int n;
int maxsum[MAX][MAX];    
int MaxSum(int i, int j){      
	if(maxsum[i][j]!=-1)
		return maxsum[i][j];
    if(i==n)    
        return D[i][j];      
    int x = MaxSum(i+1,j);      
    int y = MaxSum(i+1,j+1);      
    return max(x,y)+D[i][j];    
}  
int main(){      
    int i,j;      
    cin >> n;      
    for(i=1;i<=n;i++)     
        for(j=1;j<=i;j++)
		{
			cin >> D[i][j];
			maxsum[i][j]=-1;
		}          
    cout << MaxSum(1,1) << endl;    
}       
