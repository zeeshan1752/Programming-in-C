#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t count;
    printf("How many integers do you want to store? ");
    if (scanf("%zu", &count) != 1 || count == 0) {
        fprintf(stderr, "Please enter a positive count.\n");
        return 1;
    }

    if (count > (size_t)-1 / sizeof(int)) {
        fprintf(stderr, "Requested allocation is too large.\n");
        return 1;
    }

    int *values = malloc(count * sizeof *values);
    if (values == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %zu integers: ", count);
    for (size_t i = 0; i < count; i++) {
        if (scanf("%d", &values[i]) != 1) {
            fprintf(stderr, "Invalid integer input.\n");
            free(values);
            return 1;
        }
    }

    printf("Values: ");
    for (size_t i = 0; i < count; i++) {
        printf("%d%s", values[i], i + 1 == count ? "\n" : " ");
    }

    free(values);
    return 0;
}