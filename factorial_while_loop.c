#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter an integer from 0 to 20: ");
    if (scanf("%d", &number) != 1 || number < 0 || number > 20) {
        fprintf(stderr, "Factorial is supported here for values from 0 to 20.\n");
        return 1;
    }

    unsigned long long factorial = 1;
    int value = 2;
    while (value <= number) {
        factorial *= (unsigned long long)value;
        value++;
    }

    printf("%d! = %llu\n", number, factorial);
    return 0;
}
