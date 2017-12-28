#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	while(cin>>m>>n)
	{
		int value,x,y,max;
		bool flag=true;
		
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>value;
				if(flag)
				{
					max=value;
					flag=false;
				}
				if(abs(value)>abs(max))
				{
					x=i;
					y=j;
					max=value;
				}
			}
		}
		cout<<x+1<<" "<<y+1<<" "<<max<<endl;
	}
	return 0;
}
