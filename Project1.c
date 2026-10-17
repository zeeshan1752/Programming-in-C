#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int guessed_num, no_of_guess = 0;
    const int max_guesses = 7;
    int previous_guess = -1;

    printf("Guess the random number between 1 and 100:\n");

    while (no_of_guess < max_guesses)
    {
        scanf("%d", &guessed_num);

        if (guessed_num == previous_guess)
        {
            printf("You've already guessed %d. Try a different number: ", guessed_num);
            continue;
        }

        previous_guess = guessed_num;
        no_of_guess++;

        if (guessed_num == randomNumber)
        {
            printf("Congrats! You guessed the number correctly in %d guesses.\n", no_of_guess);
            return 0;
        }

        if (no_of_guess < max_guesses) {
            if (guessed_num < randomNumber)
            {
                printf("Your guess is low! Guess a higher number: ");
            }
            else if (guessed_num > randomNumber)
            {
                printf("Your guess is high! Guess a lower number: ");
            }
        }
    }
    printf("Sorry, you didn't guess the number correctly in %d attempts.\nThe correct number was %d.\n", max_guesses, randomNumber);
    
    return 0;
}