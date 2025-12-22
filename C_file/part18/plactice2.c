#include <stdio.h>

int main(void)
{
    int num;
    int i;
    int all = 0;
    scanf("%d", &num);
    for(int i = 2; i <= num;i += 2) {
        if (i % 2 == 0) {
             all += i;
        }
    }

    printf("%d\n",all);
    return 0;
}