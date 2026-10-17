#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 200

int main(void)
{
    char text[MAX_LENGTH];

    printf("Enter a line of text: ");
    if (fgets(text, sizeof text, stdin) == NULL) {
        fprintf(stderr, "Could not read the text.\n");
        return 1;
    }

    size_t newline = strcspn(text, "\n");
    if (text[newline] == '\n') {
        text[newline] = '\0';
    }

    printf("Length: %zu characters\n", strlen(text));
    printf("Uppercase: ");
    for (size_t i = 0; text[i] != '\0'; i++) {
        putchar(toupper((unsigned char)text[i]));
    }
    putchar('\n');

    return 0;
}