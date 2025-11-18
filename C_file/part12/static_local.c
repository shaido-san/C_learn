#include <stdio.h>

int countfunc();

int main(void)
{
    countfunc();
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void)
{
    static int count;
    count++;
    printf("%d\n",count);
    return count;
}