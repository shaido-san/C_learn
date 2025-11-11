#include <stdio.h>
#include<stdlib.h>

int abs_val(int n);

int main(void)
{
    int result;
    result = abs_val(-10);
    printf("%d\n", result);
}

int abs_val(int n)
{
    int abs_result;
    abs_result = abs(n);
    return abs_result;
}