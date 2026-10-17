#include <stdio.h>

int main(void)
{
    int physics, chemistry, mathematics;
    printf("Enter marks for physics, chemistry, and mathematics (0-100): ");
    if (scanf("%d %d %d", &physics, &chemistry, &mathematics) != 3 ||
        physics < 0 || physics > 100 ||
        chemistry < 0 || chemistry > 100 ||
        mathematics < 0 || mathematics > 100) {
        fprintf(stderr, "Enter three marks, each from 0 to 100.\n");
        return 1;
    }

    double average = (physics + chemistry + mathematics) / 3.0;
    if (physics < 33 || chemistry < 33 || mathematics < 33) {
        puts("Failed: each subject requires at least 33 marks.");
    } else if (average < 40.0) {
        puts("Failed: the overall average is below 40.");
    } else {
        puts("Passed.");
    }
    printf("Average: %.2f%%\n", average);
    return 0;
}
