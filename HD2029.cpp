# include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		string s;
		while(n--)
		{
			cin>>s;
			int low=0,height=s.length()-1;
			bool flag=true;
			while(low!=height)
			{
				if(s[low]==s[height])
				{
					low++;
					height--;
					if(low-height==1)
					{
						break;
					}
				}
				else
				{
					flag=false;
					break;			
				}
			}
			if(flag)
			{
				cout<<"yes\n";
			}else
			{
				
				cout<<"no"<<endl;
			}
			
		}
	}
	return 0;
}
