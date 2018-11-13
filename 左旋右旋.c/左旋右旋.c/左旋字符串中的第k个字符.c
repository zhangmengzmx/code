#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
void reverse(char* left,char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k, int len)
{
	reverse(arr, arr+k-1);
	reverse(arr+k, arr+len-1);
	reverse(arr, arr+len-1);
}
int main()
{
	int i = 0;
	int ret = 0;
	char arr1[10] = "abcd";
	char arr2[10] = "acbd";
	int len = strlen(arr1);
	if (strlen(arr1) != strlen(arr2))
	{
		ret = 0;
	}
	else
	{
		for (i = 0; i <len; i++)
		{
			left_move(arr1, i, strlen(arr1));
			if (strcmp(arr1,arr2)==0)
			{
				ret = 1;
				break;
			}
		}
	}
	printf("%d\n",ret);
	system("pause");
	return 0;
}
void reverse(char* left,char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k, int len)
{
	reverse(arr, arr+k-1);
	reverse(arr+k, arr+len-1);
	reverse(arr, arr+len-1);
}
int main()
{
	int k = 0;
	char arr[10] = "ABCD";
	int len = strlen(arr);
	scanf("%d", &k);
	left_move(arr, k,len);
	printf("%s\n", arr);
	system("pause");
	return 0;
}
