#include <limits.h>
#include <stdio.h>

int main(void)
{
    unsigned int left = 12U;
    unsigned int right = 10U;

    printf("left  = %u\nright = %u\n", left, right);
    printf("left & right  = %u\n", left & right);
    printf("left | right  = %u\n", left | right);
    printf("left ^ right  = %u\n", left ^ right);
    printf("~left         = %u (unsigned representation)\n", ~left);
    printf("left << 1     = %u\n", left << 1);
    printf("right >> 1    = %u\n", right >> 1);
    printf("An unsigned int has %zu bits on this system.\n",
           sizeof(unsigned int) * (size_t)CHAR_BIT);
    return 0;
}
