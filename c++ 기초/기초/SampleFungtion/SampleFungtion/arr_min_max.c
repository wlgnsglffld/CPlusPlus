#include<stdio.h>

void arr_min_max(int ar[5])
{
   int min = ar[0];
   int max = ar[0];
   int i;

    for (i = 0; i < 5; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }

    printf("�ּҰ�: %d\n", min);
    printf("�ִ밪: %d\n", max);

    return 0;
}