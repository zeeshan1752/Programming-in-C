#include <stdio.h>

int main(void)
{
    const int values[] = {3, 5, 8, 12, 16, 21, 24, 30};
    const int count = (int)(sizeof values / sizeof values[0]);
    int target;

    printf("Sorted sample: ");
    for (int i = 0; i < count; i++) {
        printf("%d%s", values[i], i + 1 == count ? "\n" : " ");
    }
    printf("Enter a value to search for: ");
    if (scanf("%d", &target) != 1) {
        fprintf(stderr, "Please enter an integer.\n");
        return 1;
    }

    int linear_index = -1;
    for (int i = 0; i < count; i++) {
        if (values[i] == target) {
            linear_index = i;
            break;
        }
    }

    int low = 0;
    int high = count - 1;
    int binary_index = -1;
    while (low <= high) {
        int middle = low + (high - low) / 2;
        if (values[middle] == target) {
            binary_index = middle;
            break;
        }
        if (values[middle] < target) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }

    if (linear_index >= 0) {
        printf("Linear search: found at index %d.\n", linear_index);
        printf("Binary search: found at index %d.\n", binary_index);
    } else {
        puts("The value was not found.");
    }
    return 0;
}
