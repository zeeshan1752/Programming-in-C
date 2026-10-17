// To find the area of circle
#include<stdio.h>
#define PI 3.14159265358979323846
int main()
{
    float r, area;
    printf("Enter the value of r: ");
    scanf("%f", &r);
    area = PI*r*r;
    printf("Area of circle whose radius %f is %f", r, area);
    return 0;
}