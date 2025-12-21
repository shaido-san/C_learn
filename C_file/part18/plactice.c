#include <stdio.h>

int olympic(int year);

enum {
    OLIMPIC_NON,
    OLIMPIC_SUMMER,
    OLIMPIC_WINTER,
};

int main(void)
{
    int year,hold;

    scanf("%d",&year);

    hold = olympic(year);

    switch (hold) {
        case OLIMPIC_NON:
          printf("開かれない\n");
          break;

        case OLIMPIC_SUMMER:
          printf("夏季五輪\n");
          break;
        
        case OLIMPIC_WINTER:
          printf("冬季五輪\n");
          break;
    };

    return 0;

}

int olympic(int year)
{
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            return OLIMPIC_SUMMER;
        } else {
            return OLIMPIC_WINTER;
        }
    } else {
        return OLIMPIC_NON;
    }
}