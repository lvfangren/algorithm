//注释掉的是自己写的代码，但是wa了。没搞太懂，提交的是别人同思路做的 
//# include<bits/stdc++.h>
//using namespace std;
//struct node{
//	int k,B;
//	friend bool operator< (node x,node y)
//	{
//		if(x.B==y.B)
//		return x.k>y.k;
//	else 
//		return x.B<y.B;	
//	}
//}sc;
//priority_queue<node>q[5];
//int main()
//{
//	freopen("in.txt","r",stdin);
//	int n;
//	while(~scanf("%d",&n))
//	{
////		queue<int>q1,q2,q3;
//		string s;
//		int A,B;
//		int k=1;
//		for(int i=1;i<=n;i++)
//		{
//			cin>>s;
//			if(s=="IN")
//			{
//				cin>>A>>B;
////				sc.A=A;
//				sc.B=B;
//				sc.k=k++;
////				k++;
//				q[A].push(sc);
//								
//			}else if(s=="OUT")
//			{
//				cin>>A;
//				if(!q[A].empty())
//				{
//					cout<<q[A].top().k<<endl;
//					q[A].pop();		
//				}else
//				{
//					cout<<"EMPTY\n";
//				}
//				
//			}
//		}
//	}
//	fclose(stdin);
//	return 0;
//}
    #include <queue>  
    #include <cstdio>  
    using namespace std;  
      
    struct node  
    {  
        int id,lv;  
        friend bool operator < (const node x,const node y)  
        {  
            if(x.lv==y.lv)  
            {  
                return x.id>y.id;  
            }  
            return x.lv<y.lv;  
        }  
      
    }tmp;  
      
    int main()  
    {  
        char str[5];  
        int n,i,a,b;  
        while(~scanf("%d",&n))  
        {  
            tmp.id=0;  
            priority_queue<node> q[4];  
            for(i=1;i<=n;i++)  
            {  
                scanf("%s",str);  
                if(str[0]=='I')  
                {  
                    tmp.id++;  
                    scanf("%d%d",&a,&b);  
                    tmp.lv=b;  
                    q[a].push(tmp);  
                }else{  
                    scanf("%d",&a);  
                    if(!q[a].empty())  
                    {  
                        printf("%d\n",q[a].top().id);  
                        q[a].pop();  
                    }else{  
                        puts("EMPTY");  
                    }  
                }  
            }  
        }  
        return 0;  
    }  
