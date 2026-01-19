#include <stdio.h>

void sub5_value(int x)
{
    x = x - 5;
}

void sub5_ptr(int *x)
{
    *x = *x - 5;
}

int main(void)
{
    int n = 20;

    sub5_value(n);
    printf("after sub5_value: n = %d\n", n);

    sub5_ptr(&n);
    printf("after sub_ptr: n = %d\n", n);

    return 0;
}