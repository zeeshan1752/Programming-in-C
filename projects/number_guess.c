#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));
    int secret = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    puts("Guess the number from 1 to 100.");
    while (1) {
        printf("Your guess: ");
        if (scanf("%d", &guess) != 1) {
            fprintf(stderr, "Please enter an integer.\n");
            return 1;
        }
        if (guess < 1 || guess > 100) {
            puts("Choose a number from 1 to 100.");
            continue;
        }

        attempts++;
        if (guess == secret) {
            printf("Correct! You guessed it in %d attempt%s.\n",
                   attempts, attempts == 1 ? "" : "s");
            return 0;
        }
        puts(guess < secret ? "Too low. Try a higher number." : "Too high. Try a lower number.");
    }
}
