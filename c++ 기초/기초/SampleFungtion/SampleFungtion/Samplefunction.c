#include<stdio.h>
#include"samplefunction1.h"

void main()
{
	//int a, b;
	//printf("두 수 입력 :");
	//scanf_s("%d %d", &a,&b);

	//printf("두 수의 덧셈 = %d\n", plus(a, b));
	//printf("두 수의 뻴셈 = %d\n", minus(a, b));

	//int n;
	//printf("정수 하나 입력 : ");
	//scanf_s("%d", &n);
	//zeroIf(n);

	//int n;
	//while (1)
	//{
	//	printf("점수입력 (종료 : 0 ): ");
	//	scanf_s("%d",&n);
	//	if (n == 0)
	//		break;
	//	printf("점수 %d => 학점 : %c\n",n,grade(n));
	//}

	int n;
	printf("입력할 숫자의 개수 :");
	scanf_s("%d", &n);
	sum_avr(n);

}