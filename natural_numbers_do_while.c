#include <stdio.h>

int main(void)
{
    int count;
    printf("How many natural numbers should be printed? ");
    if (scanf("%d", &count) != 1 || count < 1 || count > 1000000) {
        fprintf(stderr, "Enter a count from 1 to 1000000.\n");
        return 1;
    }

    int number = 1;
    do {
        printf("%d\n", number);
        number++;
    } while (number <= count);

    return 0;
}
