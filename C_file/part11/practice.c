#include <stdio.h>

int orinpic_math(int);

int main(void)
{
    int year;
    scanf("%d", &year);
    orinpic_math(year);
}

int orinpic_math(int year)
{
    if (year < 2000){
        printf("オリンピックは開催しません\n");
    } else if (year % 2 == 0){
        printf("オリンピックは開催されます\n");
    } else{
        printf("オリンピックは開催されません\n");
    }
    return 0;
}
