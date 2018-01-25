
# include<iostream>
# include<algorithm>
using namespace std;
struct Stude{
	string name;
	int num;
	int sum;	
}student[1010];
bool judge(Stude x,Stude y)
{
	if(x.sum==y.sum)
		return x.name<y.name;
	else
		return x.sum>y.sum;	
}
int main()
{
//	freopen("in.txt","r",stdin);	
	int N,M,G;
	int score[12]; 
	while(scanf("%d %d %d",&N,&M,&G)!=EOF&&N)
	{
		int count=0;
		for(int i=1;i<=M;i++)
		{
			cin>>score[i];
		}
		for(int i=1;i<=N;i++)
		{
			cin>>student[i].name>>student[i].num;
			int temp,xx=0;
			for(int j=1;j<=student[i].num;j++)
			{
				cin>>temp;
//				int xx=0;
				xx+=score[temp];	
			}
			student[i].sum=xx;
//			cout<<student[i].sum<<endl;
			if(student[i].sum>=G)
				++count;
		}
		sort(student+1,student+N+1,judge);
		cout<<count<<endl;	
		for(int i=1;i<=count;i++)
		{
			cout<<student[i].name<<" "<<student[i].sum<<endl;
		}	
	}
//	fclose(stdin);
	return 0;
}
