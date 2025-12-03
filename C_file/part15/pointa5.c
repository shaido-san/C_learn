#include <stdio.h>

int getaverage(int data[10]);

int main(void)
{
    int average,array[5] = {15, 98, 98, 17, 42};
    average = getaverage(array);
    printf("%d\n",average);
    return 0;
}

int getaverage(int *data)
{
    int i,average = 0;
    for (i = 0;i < 10;i++) {
        average += data[i];
    }

    return average / 10;
}