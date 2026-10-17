#include <stdio.h>

int main(void)
{
    int first = 10;
    int second = 20;

    printf("Before swapping: first = %d, second = %d\n", first, second);

    first ^= second;
    second ^= first;
    first ^= second;

    printf("After swapping:  first = %d, second = %d\n", first, second);
    return 0;
}
