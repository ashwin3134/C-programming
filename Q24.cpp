#include <stdio.h>
#include <ctype.h>

void removeExtraSpaces(char *str);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    removeExtraSpaces(str);

    printf("The modified string is: %s", str);

    return 0;
}

void removeExtraSpaces(char *str) {
    int i, j;
    int inside_word = 0;

    for (i = j = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            str[j++] = str[i];
            inside_word = 1;
        } else if (inside_word) {
            str[j++] = ' ';
            inside_word = 0;
        }
    }

    if (j > 0 && isspace(str[j-1])) {
        j--;
    }

    str[j] = '\0';
}
