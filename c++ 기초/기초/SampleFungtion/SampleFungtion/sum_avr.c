#include<stdio.h>

void sum_avr(int n)
{
	int cnt = 1, sum = 0, x;
	
	while(cnt <= n)
	{
		printf("%d ��° : ", cnt);
		scanf_s("%d", &x);
		if (x >= 0 && x <= 10)
		{
			sum = sum + x;
			cnt++;
		}
		else
			printf("��ȿ�� ���ڰ� �ƴ�! �ٽ� �Է��ϼ���.\n");
	
	}
	printf("�� :%d, ��� :%.2f\n", sum, (float)sum / n);
}