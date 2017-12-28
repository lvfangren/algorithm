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
//    void swap(int *a, int *b); //交换两个数  
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
          
        //排序，从a[0]开始排，从小到大  
          
            //将十个数输出  
        for (i = 0; i < n; i++)  
            printf("%d ", str[i]);
		printf("\n");	  
        return    0;  
    }    
