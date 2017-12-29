# include<iostream>
# include<string>
# include<sstream>
using namespace std;
int main()
{
	std::stringstream stream;
	string s;
	int first,second;
	s="456";
	stream<<s;
	stream>>first;
	cout<<first<<endl;
	stream.clear();
	stream<<true;
	stream>>second;
	cout<<second<<endl;
	stream.clear();
	stream<<"00154";
	stream>>first;
	cout<<first<<endl;
	return 0;
}
