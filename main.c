#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_number;

    // Initialize random seed
    srand(time(0));

    // Generate random number between 1 and 100
    random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Print the random number
    // Printf("Random Number: %d\n", randomNumber);

    do
    {
        printf("Guess the number");
        scanf("%d", &guessed);
        if (guessed > random_number)
        {
            printf("Lower number please!\n");
        }
        else if (guessed < random_number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed != random_number);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}
