#include <stdio.h>
int main()
{
    int n, prime = 0;
    printf("Enter a number to check wheather it is prime or not: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 1;
                break;
            }
        }
    }

    if (prime == 1)
    {
        printf("%d is not a prime number.", n);
    }
    else
    {
        printf("%d is a prime number.", n);
    }
    return 0;
}