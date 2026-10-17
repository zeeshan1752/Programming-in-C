#include <stdio.h>

static long long sum_natural_numbers(int number)
{
    if (number <= 0) {
        return 0;
    }
    return number + sum_natural_numbers(number - 1);
}

int main(void)
{
    int number;
    printf("Enter a value from 0 to 10000: ");
    if (scanf("%d", &number) != 1 || number < 0 || number > 10000) {
        fprintf(stderr, "Enter a value from 0 to 10000.\n");
        return 1;
    }

    printf("Sum of the first %d natural numbers: %lld\n",
           number, sum_natural_numbers(number));
    return 0;
}
