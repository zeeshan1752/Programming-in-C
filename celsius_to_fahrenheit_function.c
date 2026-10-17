#include <stdio.h>

static double celsius_to_fahrenheit(double celsius)
{
    return celsius * (9.0 / 5.0) + 32.0;
}

int main(void)
{
    double celsius;
    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        fprintf(stderr, "Please enter a numeric temperature.\n");
        return 1;
    }

    printf("%.2f C = %.2f F\n", celsius, celsius_to_fahrenheit(celsius));
    return 0;
}
