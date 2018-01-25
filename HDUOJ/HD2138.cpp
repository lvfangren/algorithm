    #include<stdio.h>  
    int main()  
    {  
        __int64 zu,i,x,j,flags;  
        while((scanf("%I64d",&zu))!=EOF){  
            i=0;  
            while(zu--){  
                flags=0;  
                scanf("%I64d",&x);  
                for(j=2;j*j<=x;j++){  
                    if((x%j)==0){  
                        flags=1;  
                        break;  
                    }                 
                }  
                if(flags==0)  
                    i++;  
            }  
        printf("%I64d\n",i);  
        }  
    }   
