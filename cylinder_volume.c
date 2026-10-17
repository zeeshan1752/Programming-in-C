#include <stdio.h>

#define PI 3.14159265358979323846

int main(void)
{
    double radius, height;
    printf("Enter radius and height: ");
    if (scanf("%lf %lf", &radius, &height) != 2 || radius < 0.0 || height < 0.0) {
        fprintf(stderr, "Enter non-negative radius and height values.\n");
        return 1;
    }

    double volume = PI * radius * radius * height;
    printf("Cylinder volume: %.2f\n", volume);
    return 0;
}
