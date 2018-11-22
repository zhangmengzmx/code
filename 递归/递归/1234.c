#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
void print(int i)
{
	if (i >= 0 && i < 10)
		printf("%d ", i);
	else
		print(i / 10);
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	print(input);
	system("pause");
	return 0;
}