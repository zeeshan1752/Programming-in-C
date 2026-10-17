#include <stdio.h>

int main(void)
{
    int count;
    printf("How many natural numbers should be printed? ");
    if (scanf("%d", &count) != 1 || count < 1 || count > 1000000) {
        fprintf(stderr, "Enter a count from 1 to 1000000.\n");
        return 1;
    }

    for (int number = 1; number <= count; number++) {
        printf("%d\n", number);
    }
    return 0;
}
