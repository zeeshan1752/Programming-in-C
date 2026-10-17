#include <stdio.h>

int main(void)
{
    int dividend, divisor;
    printf("Enter dividend and divisor: ");
    if (scanf("%d %d", &dividend, &divisor) != 2) {
        fprintf(stderr, "Please enter two integers.\n");
        return 1;
    }
    if (divisor == 0) {
        fprintf(stderr, "Division by zero is not defined.\n");
        return 1;
    }

    printf("Integer quotient: %d\n", dividend / divisor);
    printf("Remainder: %d\n", dividend % divisor);
    return 0;
}
