#include<stdio.h>

void place_value(int n)
{
	if (n % 10 == n / 10)
		printf("Yes! 10�� �ڸ��� 1�� �ڸ��� �����ϴ�.\n");
	else 
		printf("No! 10�� �ڸ��� 1�� �ڸ��� �ٸ��ϴ�.\n");
}