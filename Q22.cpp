#include <stdio.h>

int main() {
    char str[100];
    int len = 0, i;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }
    printf("The length of the string is %d\n", len);
    return 0;
}
