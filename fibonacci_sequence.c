#include <stdio.h>

int main(void)
{
    int terms;
    printf("How many Fibonacci terms should be printed (1-93)? ");
    if (scanf("%d", &terms) != 1 || terms < 1 || terms > 93) {
        fprintf(stderr, "Enter a number of terms from 1 to 93.\n");
        return 1;
    }

    unsigned long long previous = 0;
    unsigned long long current = 1;
    for (int index = 0; index < terms; index++) {
        printf("%llu%s", previous, index + 1 == terms ? "\n" : " ");
        if (index + 1 < terms) {
            unsigned long long next = previous + current;
            previous = current;
            current = next;
        }
    }
    return 0;
}
