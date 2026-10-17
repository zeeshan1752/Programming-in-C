#include <stdio.h>
#define PI 3.14159265358979323846
int main()
{
    int r, h;
    printf("Enter the value of radius: ");
    scanf("%d", &r);
    printf("Enter the value of height: ");
    scanf("%d", &h);
    printf("The volume of cylinder whose radius is %d and height is %d is %.2f", r, h, PI * r * r * h);
    return 0;
}