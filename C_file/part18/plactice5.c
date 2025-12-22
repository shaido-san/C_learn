#include <stdio.h>

void calc(int *a, int *b);

int main(void)
{
    int first;
    int second;

    scanf("%d", &first);
    scanf("%d", &second);

    printf("入力が%d, %d\n",first, second);

    calc(&first, &second);

    printf("出力:a=%d b=%d\n",first, second);
    return 0;
}

void calc(int *a, int *b)
{
    int c;
    c = *a;
    *a = *a + *b;
    *b = c - *b;
}