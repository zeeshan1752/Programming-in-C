#include <stdio.h>
int main()
{
    int income;
    float tax=0;
    printf("Enter you income: ");
    scanf("%d", &income);
    if (income <= 250000)
    {
        tax=0;
        printf("YOu don't have to pay any tax!");
    }
    else if (250000 < income && income <= 500000)
    {
        tax = 0.05*(income - 250000);
        printf("You have to pay tax! And your tax amount is: %f", tax);
    }
    else if (500000 < income && income <= 1000000)
    {
        tax = 0.05*(250000) + 0.2*(income - 500000);
        printf("You have to pay tax! And your tax amount is: %f", tax);
    }
    else if (income > 1000000)
    {
        tax = 0.05*(250000) + 0.2*(500000) + 0.3*(income - 1000000);
        printf("You have to pay tax! And your tax amount is: %.2f", tax);
    }

    return 0;
}