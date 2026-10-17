#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the size of length: ");
    scanf("%d", &a);
    printf("Enter the size of width: ");
    scanf("%d", &b);

    printf("Area of rectangle whose length is %d and width is %d is: %d", a, b, a * b);
    return 0;
}