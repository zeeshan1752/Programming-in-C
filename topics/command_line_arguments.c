#include <stdio.h>

int main(int argument_count, char *arguments[])
{
    if (argument_count == 1) {
        puts("No extra arguments were provided.");
        puts("Try running this program with words after its name.");
    }

    for (int index = 0; index < argument_count; index++) {
        printf("Argument %d: %s\n", index, arguments[index]);
    }
    return 0;
}
