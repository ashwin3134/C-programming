#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, 100, stdin);

    printf("Enter the second string: ");
    fgets(str2, 100, stdin);

    // Remove the newline characters from the end of the strings
    str1[strlen(str1)-1] = '\0';
    str2[strlen(str2)-1] = '\0';

    strcat(str1, str2);

    printf("The concatenated string is: %s\n", str1);

    return 0;
}
