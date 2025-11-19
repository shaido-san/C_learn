#include <stdio.h>

int func(void);
int hoge;

int main(void)
{
    int hoge = 32;
    func();
    return 0;
}

int func(void)
{
    printf("%d\n",hoge);
    return 0;
}