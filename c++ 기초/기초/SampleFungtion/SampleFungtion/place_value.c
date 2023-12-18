#include<stdio.h>

void place_value(int n)
{
	if (n % 10 == n / 10)
		printf("Yes! 10의 자리와 1의 자리가 같습니다.\n");
	else 
		printf("No! 10의 자리와 1의 자리가 다릅니다.\n");
}