# include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n)
	{
		int ah,bh,am,bm,as,bs;
		int count1=0,count2=0;
		while(n--)
		{
			cin>>ah>>am>>as>>bh>>bm>>bs;
			bs+=as;
			bm+=am+(bs/60);
			bh+=ah+(bm/60);
			cout<<bh<<" "<<(bm%60)<<" "<<(bs%60)<<endl;
		}
	}
	return 0;
}
