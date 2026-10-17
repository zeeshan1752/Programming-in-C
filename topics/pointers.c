#include <stdio.h>

void swap(int *left, int *right)
{
    int temporary = *left;
    *left = *right;
    *right = temporary;
}

int main(void)
{
    int first = 10;
    int second = 20;

    printf("Before swap: first = %d, second = %d\n", first, second);
    swap(&first, &second);
    printf("After swap:  first = %d, second = %d\n", first, second);

    return 0;
}