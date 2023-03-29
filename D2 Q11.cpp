#include <stdio.h>

int main() {
    int n, i, search, arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d found at position %d.\n", search, i + 1);
            break;
        }
    }

    if (i == n) {
        printf("%d not found in the array.\n", search);
    }

    return 0;
}
