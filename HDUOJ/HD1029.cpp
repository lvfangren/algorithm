//# include<iostream>
//# include<map>
//using namespace std;
//typedef map<int,int> pam;
//pam a;
//int main()
//{
//	int n,x;
//	while(scanf("%d",&n)!=EOF)
//	{
//		int temp=n;
//		while(n--)
//		{
//			cin>>x;
//			a[x]++;
//		}
//		pam::iterator ite;
//		for(ite=a.begin();ite!=a.end();ite++)
//		{
////			cout<<ite->first<<"\t"<<ite->second<<endl;
//			if(ite->second>=((temp+1)/2))
//			{
//				cout<<ite->first<<endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}
//����Ϊ�Լ������˲ο���д�ģ����ǳ�ʱ���������Ǳ��˵�Դ��

#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
typedef map<int,int> mp;
mp p;

int main()
{
    int n,temp,t;
    while(scanf("%d",&n)!= EOF){
        t = n;
        while(n--){
            scanf("%d",&temp);
            p[temp]++;
        }
        mp::iterator iter;
        temp = 1;
        for(iter = p.begin();iter!=p.end();iter++){
             //cout<<iter->first<<"\t"<<iter->second<<endl;
            if(iter->second >= ((t+1)/2)){
                printf("%d\n",iter->first);
                break;
            }
        }
        p.clear();
    }
    return 0;
} 
