//Write a program to input week number and print week days 
#include<stdio.h>
int main()
{
    int a;
    printf("Enter week number: ");
    scanf("%d", &a);
    if (a < 1 || a > 7) {
        printf("Invalid week number. Please Enter valid week number between 1 and 7");
    }
    else {
        switch (a) {
            case 1:
            printf("Monday\n");
            break;
            case 2:
            printf("Tuesday\n");
            break;
            case 3:
            printf("Wednesday\n");
            break;
            case 4:
            printf("Thursday\n");
            break;
            case 5:
            printf("Friday\n");
            break;
            case 6:
            printf("Saturday\n");
            break;
            case 7:
            printf("Sunday\n");
            break;
        }
    }
    return 0;
}