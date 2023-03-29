#include <stdio.h>
int main() 
{
    int n, i, arr[100], max, min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0]; // assume first element as maximum
    min = arr[0]; // assume first element as minimum
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The maximum value in the array is %d\n", max);
    printf("The minimum value in the array is %d\n", min);
    return 0;
}

