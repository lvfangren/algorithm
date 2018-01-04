# include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b&&(a||b))
	{
		int count=0,temp=0;
		for(int i=0;i<9;i++)
		{
			temp=a%10+b%10+temp>9?1:0;
			count+=temp;
			a/=10;
			b/=10;
		}
		cout<<count<<endl;
	}
	
}
