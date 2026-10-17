#include <stdio.h>

#define ROWS 2
#define COLUMNS 2

int main(void)
{
    int first[ROWS][COLUMNS];
    int second[ROWS][COLUMNS];
    int sum[ROWS][COLUMNS];

    printf("Enter %d values for the first matrix: ", ROWS * COLUMNS);
    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLUMNS; column++) {
            if (scanf("%d", &first[row][column]) != 1) {
                fprintf(stderr, "Invalid integer input.\n");
                return 1;
            }
        }
    }

    printf("Enter %d values for the second matrix: ", ROWS * COLUMNS);
    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLUMNS; column++) {
            if (scanf("%d", &second[row][column]) != 1) {
                fprintf(stderr, "Invalid integer input.\n");
                return 1;
            }
            sum[row][column] = first[row][column] + second[row][column];
        }
    }

    printf("Sum matrix:\n");
    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLUMNS; column++) {
            printf("%d ", sum[row][column]);
        }
        putchar('\n');
    }

    return 0;
}