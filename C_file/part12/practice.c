# include <stdio.h>

int max_of_three(int a, int b, int c);

int main(void)
{
    int result = max_of_three(4, 7, 2);
    printf("%d\n", result);
    return 0;
}

int max_of_three(int a, int b, int c)
{
    int max_num= a;

    if (b > max_num){
        max_num = b;
    } 
    if (c > max_num){
        max_num = c;
    }

    return max_num;
}