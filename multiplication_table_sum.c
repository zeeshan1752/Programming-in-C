#include <stdio.h>
int main()
{
    int n = 8, table, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        table = n * i;
        printf("%d x %d = %d\n", n, i, table);
        sum += table;
    }
    printf("The sum of numbers occuring in table of 8 is: %d", sum);
    return 0;
}