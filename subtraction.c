#include <stdio.h>

int main(void)
{
    long long first, second;
    printf("Enter two integers: ");
    if (scanf("%lld %lld", &first, &second) != 2) {
        fprintf(stderr, "Please enter two integers.\n");
        return 1;
    }

    printf("Difference: %lld\n", first - second);
    return 0;
}
