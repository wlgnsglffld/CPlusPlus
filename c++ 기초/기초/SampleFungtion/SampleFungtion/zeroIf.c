#include<stdio.h>

void zeroIf(int x)
{
	if (x < 0)
	{
		printf("����\n");
	}
	else if (x == 0)
	{
		printf("0�Դϴ�\n");
	}
	else             //else �� ������ ����
	{
		printf("���\n");
	}
}