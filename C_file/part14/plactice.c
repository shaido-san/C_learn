#include <stdio.h>

int main(void)
{
    char first_name[15];
    char second_name[15];
    char name[30];

    scanf("%s",first_name);
    scanf("%s",second_name);

    sprintf(name,"%s%s",first_name,second_name);

    printf("%s\n",name);
    return 0;
}