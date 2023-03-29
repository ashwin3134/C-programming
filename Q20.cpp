#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Remove the newline character from the end of the string
    str[strlen(str)-1] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    printf("The modified string is: %s\n", str);

    return 0;
}
