//# include<iostream>
//# include<set>
//下面这种写法意为包含所有c++的头文件，国内的部分oj平台不支持 
# include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	int n,temp[105];
	set<int> result;
	while(cin>>n&&n)
	{
		ll sum=0;
		result.clear();
		for(int i=0;i<n;i++)
		{
			cin>>temp[i];
		}	
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
			{
				result.insert(temp[i]+temp[j]);	
			}
		set<int>::iterator ite;
		for(ite=result.begin();ite!=result.end();ite++)
			sum+=*ite;
		cout<<sum<<endl;			
	}
	return 0;
}
