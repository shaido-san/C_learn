#include <stdio.h>
#include <stdlib.h>

int abs_val(int n);

int main(void)
{
    int value = -10;
    int abs_result = abs_val(value);
    printf("%d\n", abs_result);
    return 0;
}

int abs_val(int n)
{
    return abs(n);
}
