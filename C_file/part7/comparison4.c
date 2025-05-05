# include <stdio.h>

int main(void)
{
    int suuti;
    scanf("%d",&suuti);
    if (suuti >= 8 && suuti <= 12) printf("数値は8~12の間です。\n");
    if (!(suuti >= 8 && suuti <= 12)) printf("数値は8~12の間ではありません。\n");
    return 0;
}