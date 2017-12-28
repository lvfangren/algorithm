# include<iostream>
using namespace std;
int main()
{
	int A,B;
	int result;
	while(cin>>A>>B&&(A||B))
	{
		result=A;
		for(int i=1;i<B;i++)
		{
			result=(result*A)%1000;
		}
		cout<<result<<endl;	
	} 
	return 0;
}
