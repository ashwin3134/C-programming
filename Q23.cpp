#include <stdio.h>
void removeChar(char *str, char ch);

int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Enter a character to remove: ");
    scanf("%c", &ch);
    removeChar(str, ch);
    printf("The modified string is: %s", str);
    return 0;
}
void removeChar(char *str, char ch) {
    int i, j;

    for (i = j = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
