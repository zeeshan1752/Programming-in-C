#include <stdio.h>

static long long integer_power(int base, int exponent)
{
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main(void)
{
    int number;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1 || number < 0) {
        fprintf(stderr, "Please enter a non-negative integer.\n");
        return 1;
    }

    int digits = 1;
    for (int remaining = number; remaining >= 10; remaining /= 10) {
        digits++;
    }

    long long sum = 0;
    for (int remaining = number; remaining > 0; remaining /= 10) {
        sum += integer_power(remaining % 10, digits);
    }

    if (sum == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}
