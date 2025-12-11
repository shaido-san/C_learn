#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;

    printf("aの値:%d\n", a);
    printf("aのアドレス:%p\n", &a);
    printf("pの値(aのアドレス)%p\n", p);
    printf("pが指している中身,%d\n", *p);

    *p = 20;
    printf("aの新しい値: %d\n", a);

    return 0;
}