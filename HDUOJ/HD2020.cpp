//# include<stdio.h>
//int main()
//{
//	int n,m,count=0;
//	while(scanf("%d%d",&n,&m)!=EOF&&n<=100)
//	{
//	
//	}
//	return 0;
//}
    #include <stdio.h>  
    #include <math.h>  
//    void swap(int *a, int *b); //����������  
    void swap(int *a, int *b)  
    {  
        int     c;  
         c = *a;  
        *a = *b;  
        *b =  c;  
    }  
    int main()  
    {  
        int     str[10];  
        int     i, j;
		int n;
		while(scanf("%d",&n)!= EOF)
		{
			for(int i=0;i<n;i++)
			{
				scanf("%d",&str[i]);	
			}	
			for (i = 0; i < n; i++)  
        	{  
            	for (j = i + 1; j < n; j++)  
            	{	  
                	if (abs(str[i])<abs(str[j])) 
                	{  
                    	swap(&str[i], &str[j]);  
                	}		  
            	}  
        	}
		}  
          
        //���򣬴�a[0]��ʼ�ţ���С����  
          
            //��ʮ�������  
        for (i = 0; i < n; i++)  
            printf("%d ", str[i]);
		printf("\n");	  
        return    0;  
    }    
