#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int guessed_num, no_of_guess=0;
    do
    {
        printf("Guess the random number: ");
        scanf("%d", &guessed_num);
        no_of_guess++;
        if (guessed_num < randomNumber)
        {
            printf("Enter a higher number.");
        }
        else if (guessed_num > randomNumber)
        {
            printf("Enter a lower number.");
        }
    } while (guessed_num != randomNumber);
    printf("\n");
    printf("Congrats! You guss the number correctly in %d guesses.", no_of_guess);
    return 0;
}