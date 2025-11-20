#include <stdio.h>

int main(void)
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int i;

    for (i = 9;i < sizeof(array) / sizeof(array[0]);i--) {
        printf("%d\n",array[i]);
    }

    return 0;
}