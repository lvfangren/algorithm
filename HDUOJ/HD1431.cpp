//# include<stdio.h>
////using namespace std;
//int change(int n)
//{
//	int ref=0;
//	int k=0,temp=n;
//	while(temp!=0)
//	{
//		++k;
//		temp/=10;
//	}
//	for(int i=0;i<k;i++)
//	{
//		ref*=10;
//		ref+=(n%10);
//		n/=10;		
//	}
//	return ref;	
//}
//int main()
//{
//	int a,b;
//	int i,j;
//	while(scanf("%d %d",&a,&b)!=EOF)
//	{
//		for(i=a;i<=b;i++)
//		{
//			int flag=1;
//			for(j=2;j<i;j++)
//			{
//				if(i%j==0)
//					flag=0;	
//			}
//			if(flag&&(i==change(i)))
//			{
////				cout<<i<<endl;
//				printf("%d\n",i);
//			}
//		}
////		cout<<endl;
//		printf("\n");
//	}
//	return 0;
//}
//����Ľⷨ��ʱ, �������ѣ�û�±�tm��Ϲ�����ˣ�������µġ����� 
# include<iostream>
using namespace std; 
bool prim[9989900];//ͨ������ֱ����5��100000000������������������9989899   
int h[10005];  
void sushu()//����Ϊ0������Ϊ1   
{  
    int i=2,j;  
    for(j=i*i;j<=9989899;j+=i)  
    {  
            prim[j]=1;  
    }  
    for(i=3;i<=3161;i+=2)//��Ϊ��2֮���ż�����Ǻ��������Խ�2���⿼��   
    {
	//Ȼ��ֱ�������������Ҿ�����   
        if(prim[i]) continue;   
        for(j=i*i;j<=9989899;j+=i)  
        {  
            prim[j]=1;  
        }  
    }  
}  
bool huiwen(int n)//�������͵�����ԭ����ȣ���ô���ǻ�����   
{  
    int temp=n,t=0;  
    while(temp)  
    {  
        t=t*10+temp%10;  
        temp/=10;  
    }  
    return t==n;  
}  
int main()  
{  
    sushu();//����ӿ��ٶȣ�����ֱ�ӿ�100000000�ᳬ�ڴ棬������Ҫ�ҳ������ػ�����   
    int t=0;  
    for(int i=5;i<=9989899;i++)  
    {  
        if(!prim[i]&&huiwen(i))  
        {  
            h[t++]=i;  
        }  
    }  
    int a,b;  
    while(scanf("%d%d",&a,&b)!=EOF)  
    {  
        for(int i=0;i<t;i++)  
        {  
            if(h[i]<a)  
            {  
                continue;  
            }  
            else if(h[i]<=b)  
            {  
                printf("%d\n",h[i]);  
            }  
            else  
            {  
                break;  
            }  
        }  
        printf("\n");  
    }  
    return 0;  
}  
