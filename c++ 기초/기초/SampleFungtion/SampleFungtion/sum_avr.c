#include<stdio.h>

void sum_avr(int n)
{
	int cnt = 1, sum = 0, x;
	
	while(cnt <= n)
	{
		printf("%d 번째 : ", cnt);
		scanf_s("%d", &x);
		if (x >= 0 && x <= 10)
		{
			sum = sum + x;
			cnt++;
		}
		else
			printf("유효한 숫자가 아님! 다시 입력하세요.\n");
	
	}
	printf("합 :%d, 평균 :%.2f\n", sum, (float)sum / n);
}