#include <stdio.h>

int main(void)
{
    int numbers[4];
    printf("Enter four integers: ");
    for (int i = 0; i < 4; i++) {
        if (scanf("%d", &numbers[i]) != 1) {
            fprintf(stderr, "Please enter four integers.\n");
            return 1;
        }
    }

    int largest = numbers[0];
    for (int i = 1; i < 4; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("Largest value: %d\n", largest);
    return 0;
}
