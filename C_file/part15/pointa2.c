#include <stdio.h>

int main(void)
{
    int *p,i;
    p = &i;

    /* 通常モードに切り替えたポインタ変数に代入 */
    *p = 10;
    printf("*p = %d\n", *p);
    printf("i = %d\n",i);
}