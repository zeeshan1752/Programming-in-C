#include <stdio.h>

static int is_leap_year(int year)
{
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

int main(void)
{
    int month, year;
    printf("Enter month number and year: ");
    if (scanf("%d %d", &month, &year) != 2 || month < 1 || month > 12 || year < 1) {
        fprintf(stderr, "Enter a month from 1 to 12 and a positive year.\n");
        return 1;
    }

    int days;
    switch (month) {
        case 2:
            days = is_leap_year(year) ? 29 : 28;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        default:
            days = 31;
    }

    printf("Month %d of %d has %d days.\n", month, year, days);
    return 0;
}
