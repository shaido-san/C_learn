# include <stdio.h>

int main(void)
{
    int value; /* 変数宣言 */
    int left;
    int right;
    int value2;
    int value3;
    value = 10; /* 代入している */
    left = 20;
    right = 3;
    value2 = 54 + 46;
    value3 = 30;
    printf("%d\n", value);
    printf("%d\n", left + right);
    printf("%d\n", left - right);
    printf("%d\n", left * right);
    printf("%d\n", left / right);
    printf("%d\n", left % right);
    printf("%d\n", value2);
    printf("%d\n", value3);
    value3++;
    printf("%d\n", value3);
    value3--;
    printf("%d\n", value3);
    printf("%f\n", 1.03 * 76);
    return 0;
}