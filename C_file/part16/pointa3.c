#include <stdio.h>

void changeValue(int *ptr);

int main(void)
{
    int num = 10;
    printf("変更前: %d\n", num);

    changeValue(&num);

    printf("変更後: %d\n", num);
    return 0;
}

void changeValue(int *ptr)
{
    *ptr = 99;
}