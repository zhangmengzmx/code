#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int day = 9;
	int rest = 1;
	int count = 0;
	while (day)
	{
		count = (rest + 1) * 2;
		rest = count;
		day--;
	}
	printf("eat peach total is %d", count);
	system("pause");
	return 0;
}