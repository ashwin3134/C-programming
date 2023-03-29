#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    char temp;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Remove the newline character from the end of the string
    str[strlen(str)-1] = '\0';

    len = strlen(str);

    // Swap characters from the beginning and end of the string
    for (i = 0, j = len-1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("The reversed string is: %s\n", str);

    return 0;
}
