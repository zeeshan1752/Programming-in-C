#include <stdio.h>

int main(void)
{
    int first, second;
    printf("Enter two integers: ");
    if (scanf("%d %d", &first, &second) != 2) {
        fprintf(stderr, "Please enter two integers.\n");
        return 1;
    }

    printf("Before swapping: first = %d, second = %d\n", first, second);
    int temporary = first;
    first = second;
    second = temporary;
    printf("After swapping:  first = %d, second = %d\n", first, second);
    return 0;
}
