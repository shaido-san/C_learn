#include <stdio.h>

int* find_first_even(int *arr_list, int n)
{

    for (int i = 0;i < n; i++) { 
        if (arr_list[i] % 2 == 0) {
            return &arr_list[i];
    }
}
return NULL;
}

int main(void)
{
    int arr_list[9] = {13, 47, 97, 61, 35, 79, 21, 60, 53};
    int *p = find_first_even(arr_list, 9);
    
    if (p == NULL) {
        printf("見つかりません\n");
    } else {
        printf("%d\n", *p);
    }
    return 0;
}