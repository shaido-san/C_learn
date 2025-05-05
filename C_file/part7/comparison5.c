# include <stdio.h>

int main(void)
{
    int score;
    printf("点数を入力して下さい:");
    scanf("%d",&score);
    if (score > 100) printf("入力値が100より大きいので修正します。\n");
    if (score > 100) score = 100;
    printf("点数は %d 点です。\n",score);
    return 0;
}