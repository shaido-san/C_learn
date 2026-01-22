#include <stdio.h>

void reverse(int *arr, int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    return;


}

int main(void)
{
    int arr[7] = {5, 3, 8, 1, 2, 6, 4};
    int n = 7;

    for (int k = 0;k < n; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");

    reverse(arr, n);
    for (int k = 0;k < n; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");
    return 0;
}