//# include<iostream>
//# include<set>
//��������д����Ϊ��������c++��ͷ�ļ������ڵĲ���ojƽ̨��֧�� 
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
