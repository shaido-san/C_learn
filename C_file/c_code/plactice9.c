# include <stdio.h>

int* find_first_multiple_of_5(int *arr, int n)

{
    for (int i = 0; i < n;i++) {
        if (arr[i] % 5 == 0) {
            return &arr[i];
        }
    }

    return NULL;
}

int main(void)
{
    /*int numbers[7] = {31, 72, 96, 47, 90, 56, 55};*/
    int numbers[7] = {31, 72, 96, 47, 91, 56, 59};
    int *number = find_first_multiple_of_5(numbers, 7);
    
    if (number == NULL) {
        printf("値はありません\n");
        return 0;
    } else printf("%d\n", *number);
      return 0;
}