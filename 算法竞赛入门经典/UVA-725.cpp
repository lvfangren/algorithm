// #include <bits/stdc++.h>
// using namespace std;
// int result[11];
// int judge(int temp1,int temp2){
//   // int temp1=x,temp2=y;
//   int sum=0;
//   if (temp2>98765) {
//     return 0;
//   }
//   if (temp1<10000) {
//     result[0]=1;
//     // sum+=result[0];
//   }
//   while (temp2) {
//     result[temp2%10]=1;
//     // sum+=result[temp1%10];
//     temp2/=10;
//   }
//     while (temp1) {
//       result[temp1%10]=1;
//       // sum+=result[temp1%10];
//       temp1/=10;
//     }
//     for (int i = 0; i < 10; i++) {
//       sum+=result[i];
//     }
//     return sum==10;
// }
// int main(int argc, char const *argv[]) {
//   freopen("in.txt","r",stdin);
//   memset(result,0,sizeof(result));
//   int n,m=0;
//   while (scanf("%d",&n)!=EOF&&n) {
//      if (m>0) printf("\n");
//      m++;
//      int flag=1;
//     for (int i = 1234; i < 50000; i++) {
//       if(judge(i,i*n)){
//         // std::cout << i*n <<"/"<<i<<"="<<n<< '\n';
//         printf("%d / %05d = %d\n", i*n,i,n);
//         flag=0;
//       // }else{
//       //   std::cout << "There are no solutions for " <<n<< '\n';
//       // }
//     }
//   }
//   if (flag) {
//       std::cout << "There are no solutions for " <<n<< '\n';
//   }
// }
//   fclose(stdin);
//   return 0;
// }

#include<stdio.h>
int p[15];
int juge(int a, int b)    //判断出符合条件的a，b，把a，b每一位都标记一次
{
    if (a > 98765)
        return 0;
    for (int i = 0; i < 10; i++)
    {
        p[i] = 0;
    }
    if (b<10000)
        p[0]=1;
    while(a)
    {
        p[a%10] = 1;                      //判断每一位，然后标记
        a/= 10;
    }
    while(b)
    {
        p[b%10] = 1;
        b/=10;
    }
    int total = 0;
    for (int i = 0; i < 10; i++)
        total+=p[i];
    return total==10;                      //直到有符合条件的不同的十个数字
}
int main()
{
    int n, m = 0;
    while (scanf("%d", &n) == 1, n)
    {

        if (m>0) printf("\n");
        m++;                     //输出格式要求
        int f = 1;
        for (int i = 1234; i < 5000; i++)             //范围应该很好想出
        {
            if (juge(i*n,i))
            {
                printf("%d / %05d = %d\n", i*n,i,n);   //格式控制输出，五位数如果缺就用0补上
                f =0;
            }
        }
        if (f)
        {
            printf("There are no solutions for %d.\n",n);
        }
    }
    return 0;
}
