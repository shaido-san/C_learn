#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
    int first_num;
    int second_num;
    scanf("%d", &first_num);
    scanf("%d", &second_num);
    swap(&first_num, &second_num);
    printf("first_num = %dでsecond_num = %d\n",first_num, second_num);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}