#include <stdio.h>

int main(void)
{
    double celsius;
    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        fprintf(stderr, "Please enter a numeric temperature.\n");
        return 1;
    }

    double fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    printf("%.2f C = %.2f F\n", celsius, fahrenheit);
    return 0;
}
