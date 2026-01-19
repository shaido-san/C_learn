#include <stdio.h>

void add10_value(int x)
{
    x = x + 10;
}

void add10_ptr(int *x)
{
    *x = *x + 10;
}

int main(void)
{
    int n = 5;

    add10_value(n);
    printf("after add10_value: n=%d\n", n);

    add10_ptr(&n);
    printf("after add10_ptr: n=%d\n", n);

    return 0;
}