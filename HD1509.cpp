//同1873情况相同求斧正 
//# include<bits/stdc++.h>
//using namespace std;
//struct node{
//	string str;
//	int key,right,k;
//	friend bool operator <(node a,node b)
//	{
//		if(a.right!=b.right)
//			return a.right>b.right;			
//		else
//			return a.k>b.k;
//	}
//}stc;
//int main()
//{
////	freopen("in.txt","r",stdin);
//	char s[7];
//	int count=0;
//	priority_queue<node> m;
//	while(scanf("%s",s)!=EOF)
//	{
////		cout<<"scascacas"<<endl;
//		count=0;
//		string temp;
//		int a,b;	
//		if(s[0]=='G')
//		{
//			if(m.empty())
//			{
//				cout<<"EMPTY QUEUE!\n";
//				continue;
//			}else
//			{
//				cout<<m.top().str<<" "<<m.top().key<<endl;
////				count--;
//				m.pop();
//			}
//		}else if(s[0]=='P')
//		{
//			cin>>temp>>a>>b;
////			count++;
//			stc.str=temp;
//			stc.key=a;
//			stc.right=b;
//			stc.k=++count;
//			m.push(stc);
//		}
//	}
////	fclose(stdin);
//	return 0;
//}
# include<bits/stdc++.h>
using namespace std;  
struct node  
{  
    char str[100];  
    int s1;  
    int s2;  
    int cnt;  
    friend bool operator < (node a, node b)  
    {  
        if(a.s2 != b.s2)  
        return a.s2 > b.s2;  
        else  
        return a.cnt > b.cnt;  
    }  
};  
int main()  
{  
    int k = 0;  
    char op[5];  
    node NODE;  
    priority_queue<node> Q;  
  
    while(scanf("%s", op) != EOF)  
    {  
        if(op[0] == 'G')  
        {  
            if(Q.empty())  
            {  
                printf("EMPTY QUEUE!\n");  
                continue;  
            }  
            else  
            {  
                NODE  = Q.top();  
                Q.pop();  
                printf("%s %d\n", NODE.str, NODE.s1);  
            }  
        }  
        else if(op[0] == 'P')  
        {  
            scanf("%s%d%d", NODE.str, &NODE.s1, &NODE.s2);  
            NODE.cnt = k++;  
            Q.push(NODE);  
        }  
    }  
    return 0;  
}  
