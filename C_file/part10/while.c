#include <stdio.h>

int main (void)
{
    double money = 1;
    int month = 1;

    while (money < 1000000) {
        printf("%02d 月目 : %7.0f 円\n", month,money);
        money *= 2;
        month++;
    }
    printf("%2d 月目に %7.0f 円になり、100万を超える。\n", month,money);

    return 0;
}