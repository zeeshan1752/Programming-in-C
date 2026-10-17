#include <stdio.h>

int main(void)
{
    long long income;
    printf("Enter annual income for this example: ");
    if (scanf("%lld", &income) != 1 || income < 0) {
        fprintf(stderr, "Enter a non-negative whole-number income.\n");
        return 1;
    }

    double tax;
    if (income <= 250000) {
        tax = 0.0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = 12500.0 + (income - 500000) * 0.20;
    } else {
        tax = 112500.0 + (income - 1000000) * 0.30;
    }

    printf("Example tax calculation: %.2f\n", tax);
    puts("The brackets in this exercise are illustrative, not current tax guidance.");
    return 0;
}
