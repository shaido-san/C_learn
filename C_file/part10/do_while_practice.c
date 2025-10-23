#include <stdio.h>

int main(void)
{
    int num;

    scanf("%d", &num);
    if (num < 0){
        printf("負の値は点数になりません。");
    } if (num > 100){
        printf("100点以上はありません。");
    } else {
        printf("%d点です。", num);
    }
    return 0;
}