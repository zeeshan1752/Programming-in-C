#include <stdio.h>

#define MAX_ITEMS 100

int main(void)
{
    int values[MAX_ITEMS];
    int count;
    long long sum = 0;

    printf("How many integers (1-%d)? ", MAX_ITEMS);
    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_ITEMS) {
        fprintf(stderr, "Please enter a count from 1 to %d.\n", MAX_ITEMS);
        return 1;
    }

    printf("Enter %d integers: ", count);
    for (int i = 0; i < count; i++) {
        if (scanf("%d", &values[i]) != 1) {
            fprintf(stderr, "Invalid integer input.\n");
            return 1;
        }
        sum += values[i];
    }

    printf("Array values: ");
    for (int i = 0; i < count; i++) {
        printf("%d%s", values[i], i + 1 == count ? "\n" : " ");
    }
    printf("Sum: %lld\n", sum);
    printf("Average: %.2f\n", (double)sum / count);
    return 0;
}
