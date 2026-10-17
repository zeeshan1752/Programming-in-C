#include <stdio.h>

int main(void)
{
    int value = 4;
    printf("Starting value: %d\n", value);
    printf("Prefix increment (++value): %d\n", ++value);
    printf("Postfix increment (value++): %d\n", value++);
    printf("Value after both increments: %d\n", value);
    return 0;
}
