#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[100];
    int i, j, k, flag;

    printf("Enter the first string: ");
    fgets(str1, 100, stdin);

    printf("Enter the second string: ");
    fgets(str2, 100, stdin);

    // Remove the newline characters from the end of the strings
    str1[strlen(str1)-1] = '\0';
    str2[strlen(str2)-1] = '\0';

    k = 0;
    for (i = 0; str2[i] != '\0'; i++) {
        flag = 0;
        for (j = 0; str1[j] != '\0'; j++) {
            if (str2[i] == str1[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            result[k] = str2[i];
            k++;
        }
    }
    result[k] = '\0';

    printf("The modified second string is: %s\n", result);

    return 0;
}
