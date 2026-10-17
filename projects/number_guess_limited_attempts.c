#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ATTEMPTS 7

int main(void)
{
    srand((unsigned int)time(NULL));
    int secret = rand() % 100 + 1;

    puts("Guess the number from 1 to 100. You have 7 attempts.");
    for (int attempt = 1; attempt <= MAX_ATTEMPTS; attempt++) {
        int guess;
        printf("Attempt %d/%d: ", attempt, MAX_ATTEMPTS);
        if (scanf("%d", &guess) != 1) {
            fprintf(stderr, "Please enter an integer.\n");
            return 1;
        }
        if (guess < 1 || guess > 100) {
            puts("Choose a number from 1 to 100.");
            attempt--;
            continue;
        }
        if (guess == secret) {
            printf("Correct! You guessed it in %d attempt%s.\n",
                   attempt, attempt == 1 ? "" : "s");
            return 0;
        }
        puts(guess < secret ? "Too low." : "Too high.");
    }

    printf("No attempts left. The number was %d.\n", secret);
    return 0;
}
