#include <stdio.h>

void max2(int a, int b, int *out)
{
    if (a > b) {
        *out = a;
        return;
    } else {
        *out = b;
        return;
    }
}

int main(void)
{
    int number_1 = 15;
    int number_2 = 20;
    int result;

    max2(number_1, number_2, &result);
    printf("%d\n", result);
    return 0;
}