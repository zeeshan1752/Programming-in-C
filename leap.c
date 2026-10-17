#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year to check: ");
    scanf("%d", &y);
    if ((y%4==00) && (y%100!=0) ||(y%400==0))
    {
        printf("It is a leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}  