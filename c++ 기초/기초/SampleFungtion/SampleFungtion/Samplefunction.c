#include<stdio.h>
#include"samplefunction1.h"

void main()
{
	//int a, b;
	//printf("�� �� �Է� :");
	//scanf_s("%d %d", &a,&b);

	//printf("�� ���� ���� = %d\n", plus(a, b));
	//printf("�� ���� �y�� = %d\n", minus(a, b));

	//int n;
	//printf("���� �ϳ� �Է� : ");
	//scanf_s("%d", &n);
	//zeroIf(n);

	//int n;
	//while (1)
	//{
	//	printf("�����Է� (���� : 0 ): ");
	//	scanf_s("%d",&n);
	//	if (n == 0)
	//		break;
	//	printf("���� %d => ���� : %c\n",n,grade(n));
	//}

	int n;
	printf("�Է��� ������ ���� :");
	scanf_s("%d", &n);
	sum_avr(n);

}