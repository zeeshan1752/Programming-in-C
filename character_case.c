#include <stdio.h>

int main(void)
{
    char character;
    printf("Enter one alphabetic character: ");
    if (scanf(" %c", &character) != 1) {
        fprintf(stderr, "Could not read a character.\n");
        return 1;
    }

    if (character >= 'a' && character <= 'z') {
        printf("%c is lowercase.\n", character);
    } else if (character >= 'A' && character <= 'Z') {
        printf("%c is uppercase.\n", character);
    } else {
        printf("%c is not an English alphabetic character.\n", character);
    }
    return 0;
}
