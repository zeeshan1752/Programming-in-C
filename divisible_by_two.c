#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        fprintf(stderr, "Please enter an integer.\n");
        return 1;
    }

    if (number % 2 == 0) {
        printf("%d is divisible by 2.\n", number);
    } else {
        printf("%d is not divisible by 2.\n", number);
    }
    return 0;
}
