# include<iostream>
using namespace std;
int main()
{
	int n;
	char a;
	cin>>n;
	getchar();
	while(n--)
	{
		bool one[4]={false,false,false,false};
		int count2=0,count1=0;
		while((a=getchar())!='\n')
		{
			++count1;
			if(a>='A'&&a<='Z')
			{
				one[0]=true;
			}
			if(a>='a'&&a<='z')
			{
				one[1]=true;
			}
			if(a>='1'&&a<='9')
			{
				one[2]=true;
			}
			if(a=='~'||a=='!'||a=='@'||a=='#'||a=='$'||a=='%'||a=='^')
			{
				one[3]=true;
			}
			
		}
		for(int i=0;i<4;i++)
		{
			if(one[i])
			{
				++count2;
			}
		}
		if((count2>=3)&&(count1>=8&&count1<16))
			cout<<"YES\n";
		else
			cout<<"NO\n";		
	}
	return 0;
}
