#include <stdio.h>

int main(void)
{
    const char *file_name = "programming_in_c_demo.txt";
    FILE *file = fopen(file_name, "w");
    if (file == NULL) {
        perror("Could not open file for writing");
        return 1;
    }

    fputs("This line was written by a C program.\n", file);
    if (fclose(file) != 0) {
        perror("Could not close file after writing");
        return 1;
    }

    file = fopen(file_name, "r");
    if (file == NULL) {
        perror("Could not open file for reading");
        return 1;
    }

    printf("Contents of %s:\n", file_name);
    char line[256];
    while (fgets(line, sizeof line, file) != NULL) {
        fputs(line, stdout);
    }

    if (ferror(file)) {
        perror("Error while reading file");
        fclose(file);
        return 1;
    }

    fclose(file);
    return 0;
}