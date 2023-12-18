#include<stdio.h>

void zeroIf(int x)
{
	if (x < 0)
	{
		printf("음수\n");
	}
	else if (x == 0)
	{
		printf("0입니다\n");
	}
	else             //else 는 조건이 없음
	{
		printf("양수\n");
	}
}