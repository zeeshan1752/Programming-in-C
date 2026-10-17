#include <stdio.h>

static unsigned long long factorial(int number)
{
    if (number <= 1) {
        return 1;
    }
    return (unsigned long long)number * factorial(number - 1);
}

int main(void)
{
    int number;
    printf("Enter an integer from 0 to 20: ");
    if (scanf("%d", &number) != 1 || number < 0 || number > 20) {
        fprintf(stderr, "Factorial is supported here for values from 0 to 20.\n");
        return 1;
    }

    printf("%d! = %llu\n", number, factorial(number));
    return 0;
}
