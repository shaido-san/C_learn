#include <stdio.h>

void add_and_sub(int *a, int *b)
{
    *a += 10;
    *b -= 10;
}

int main(void)
{
    int c = 5;
    int d = 10;
    printf("a = %d b = %d\n", c,d);
    add_and_sub(&c,&d);
    printf("a = %d b = %d\n", c,d);
    return 0;
}