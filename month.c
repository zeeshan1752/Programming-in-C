//Write a program to input month number and print number of days in that month
#include<stdio.h>
int main()
{
    int a;
    printf("Enter month number: ");
    scanf("%d", &a);
    if (a < 1 || a > 12) {
        printf("Invalid month number. Please Enter valid month number between 1 and 12");
    }
    else {
        int numberOfDays;
        switch (a) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            numberOfDays = 31;
            break;
            case 4: case 6: case 9: case 11:
            numberOfDays = 30;
            break;
            case 2:
            numberOfDays = 28;
            break;
        }
        printf("Number of days in month %d: %d\n", a, numberOfDays);
    }
    return 0;
}