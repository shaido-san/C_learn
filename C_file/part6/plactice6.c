#include <stdio.h>

int main(void)
{
    int price;

    printf("定価を入力して下さい");
    scanf("%d", &price);

    printf("1割 = %d円\n", (int) (price * 0.9));
    printf("3割 = %d円\n", (int) (price * 0.7));

    return 0;
}