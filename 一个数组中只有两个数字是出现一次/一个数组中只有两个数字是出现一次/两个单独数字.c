#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<assert.h>
#define MONEY 21
int main()
{
	int bottle = MONEY / 1;
	int value = 0;
	int count = MONEY / 1;
	while (bottle>1)
	{
		value = bottle % 2;
		bottle >>= 1;
		count += bottle;
		bottle += value;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
void find(int arr[], int sz)
{
	int i = 0;
	int flag = 0;
	int num = 0;
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < sz; i++)
	{
		num ^= arr[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (!((num >> i) & 1))
		{
			flag++;
		}
		else
		{
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> flag) & 1) == 1)
		{
			num1 ^= arr[i];
		}
		else
		{
			num2 ^= arr[i];
		}
	}
	printf("%d %d\n", num1, num2);
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 1, 2, 3, 4, 5, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	find(arr, sz);
	system("pause");
	return 0;
}
//void my_strcat(char *des, const char *src)
//{
//	assert(des);
//	assert(src);
//	int szd = sizeof(des);
//	int szs = sizeof(src);
//	int i = szd-1;
//	while (i<szd+szs-1)
//	{
//		*(des+i) = *src;
//		src++;
//		i++;
//	}
//}
//int main()
//{
//	char *des = "abcd";
//	const char *src = "efg";
//	my_strcat(des, src);
//	printf("%s\n", des);
//	printf("%d\n", sizeof(des));
//	system("pause");
//	return 0;
//}
//void my_strcpy(char *src, char *des)
//{
//	int i = 0;
//	int sz = sizeof(src);
//	while (i<sz)
//	{
//		des[i]= *src;
//		src++;
//		i++;
//	}
//}
//int main()
//{
//	char src[5] = "abcd";
//	char des[5] = { 0 };
//	my_strcpy(src, des);
//	printf("%s\n",des);
//	system("pause");
//	return 0;
//}