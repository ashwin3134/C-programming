#include <stdio.h>

int main() {
    int n, i, j, sum = 0, arr[100][100];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The diagonal elements of the matrix are: ");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }

    printf("\nThe sum of the diagonal elements is %d.\n", sum);

    return 0;
}
