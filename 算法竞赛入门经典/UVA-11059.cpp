// wa
// #include <bits/stdc++.h>
// using namespace std;
// const int MAXLEN=100;
// long long a[MAXLEN+2];
// int main(int argc, char const *argv[]) {
//   int n,no=0;
//   long long result=0;
//   while (scanf("%d",&n )!=EOF&&n) {
//     for (int i = 0; i < n; ++i) {
//       std::cin >> a[i];
//     }
//     for (int i = 1; i <= n; ++i) {
//       for (int j = 0; j+i <= n; ++j) {
//           long long temp=1;
//           for (int k = j; k < j+i; ++k) {
//             temp*=a[k];
//           }
//           result=max(result,temp);
//       }
//     }
//     printf("Case #%d: The maximum product is %lld.\n\n",++no,result);
//   }
//   return 0;
// }

#include<iostream>
#include<cstdio>
using namespace std;
long long num[100];

int main()
{
	int n;
	int cnt = 0;
	while (cin >> n)
	{
		long long ans = 0;
		for (int i = 0; i < n; ++i)
			cin >> num[i];
		for (int i = 1; i <= n; ++i) //i:子序列长度
		{
			for (int j = 0; j + i <= n; ++j) //j:子序列起点 （这里之前写j + i < n，怒跪）
			{
				long long tt = 1;
				for (int k = j; k < j + i; ++k) //累乘
				{
					tt *= num[k];
				}
				//cout << tt << endl;
				ans = max(ans, tt);
			}
		}
		printf("Case #%d: The maximum product is %lld.\n\n", ++cnt, ans);
	}
	return 0;
}
