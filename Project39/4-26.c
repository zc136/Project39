////107矩阵转置//行列想反
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int arr[20][20] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		{
//			for (j = 0; j < m; j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		{
//			for (j = 0; j <n; j++)
//			{
//				printf("%d ", arr[j][i]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//108矩阵交换
//#include<stdio.h>
//int main() {
//    int n, m, i, j, x, tmp, b, c;
//    char k;
//    scanf("%d %d", &n, &m);
//    int a[10][10];
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    scanf("%d", &x);
//    while (x > 0) {
//        scanf(" %c %d %d", &k, &b, &c);;
//        if (k == 'r') {//行变换 
//            for (i = 0; i < m; i++) {
//                tmp = a[b - 1][i];
//                a[b - 1][i] = a[c - 1][i];
//                a[c - 1][i] = tmp;
//            }
//        }
//        if (k == 'c') {//列变换 
//            for (i = 0; i < n; i++) {
//                tmp = a[i][b - 1];
//                a[i][b - 1] = a[i][c - 1];
//                a[i][c - 1] = tmp;
//            }
//        }
//        x--;
//
//    }
//    for (i = 0; i < n; i++) {
////        for (j = 0; j < m; j++) {
////            printf("%d ", a[i][j]);
////        }
////        printf("\n");
////    }
////}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a[100] = { 0 };
//	int j = 0;
//	scanf("%d", &n);
//	while (n>=6)
//	{
//		a[i] = n % 6;
//		a[i+1] = n / 6;
//		n /= 6;
//		i++;
//	}
//	for (j = i; j >=0; j--)
//	{
//	
//	printf("%d", a[j]);
//}
//	return 0;
//}
////求和
//#include<stdio.h>
//int main()
//{
//	int n, i;
//	int sum=0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		sum += i;
//		//printf("%d", sum);
//	
//	}
//	printf("%d", sum);
//	return 0;
//}
//小乐乐求和
//#include<stdio.h>//递归
//
//long long sum(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n + sum(n - 1);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	long long s = sum(n);
//	printf("%lld\n", s);
//	return 0;
//}

//
