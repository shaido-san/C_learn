#include <stdio.h>

int count;

int countfunc(void);

int main(void)
{
    int count;

    countfunc();
    count = 10;
    countfunc();
    countfunc();
    printf("main: count = %d\n",count);
    return 0;
}

int countfunc(void)
{
    count++;
    printf("%d\n",count);
    return count;
}