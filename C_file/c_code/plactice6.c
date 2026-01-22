#include <stdio.h>

void stats3(int a, int b, int c, int *max, int *min, int *sum)
{
    *sum = a + b + c;

    *max = a;
    *min = a;

    if (b > *max) *max = b;
    if (b < *min) *min = b;

    if (c > *max) *max = c;
    if (c < *min) *min = c;
}

int main(void)
{
    int first = 20;
    int second = 30;
    int third = 40;
    int max_number; 
    int min_number;
    int sum_numbers;

    stats3(first, second, third, &max_number, &min_number, &sum_numbers);
    
    printf("max = %d min = %d sum = %d\n", max_number, min_number, sum_numbers);
    return 0;

}