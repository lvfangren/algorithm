# include<iostream>
# include<queue>
using namespace std;
//queue<int>q;
typedef queue<int> duil;
duil q;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		q.push(i);
	}
//	cout<<q.empty()<<endl;
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
		q.push(q.front());
		q.pop();
	}
	return 0;
}
