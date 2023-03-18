#include<stdio.h>
#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i=1000;i<=2000;i++)
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	return 0;
//}
//int binary_lookup(int arr[], int k,int j)
//{
//	int z = 0;
//	int y = j - 1;
//	while (z<=y)
//	{
//		int zj = (z + y) / 2;
//		if (arr[zj] < k)
//		{
//			z = zj + 1;
//		}
//		else if (arr[zj] > k)
//		{
//			y = zj - 1;
//		}
//		else
//		{
//			return zj;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int j = sizeof(arr) / sizeof(arr[0]);
//	int i = binary_lookup(arr, k,j);
//	if (i == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n", i);
//	}
//	return 0;
//
//}
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int a = 0;
//	Add(&a);
//	printf("%d\n", a);
//	Add(&a);
//	printf("%d\n", a);
//	Add(&a);
//	printf("%d\n", a);
//	return 0;
//}