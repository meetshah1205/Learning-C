// Nedded libraries
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
    // Declaring variables  
    int num;
    int guess;
    int nguesses = 0;

    // Seeding the random number generator with current time
    srand(time(0));
    num = rand() % 100; // Generate random number between 1a and 100
    // printf("Random number between 1 and 100: %d\n", num);
    // Keep running the loop until  the number is guessed
    do
    {
        printf("Guess the number between 1 and 100: ");
        scanf("%d", &guess);
        if (guess > num) {
            printf("Too high!\n");
           
        }
        else if (guess < num) {
            printf("Too low!\n");
            
        }
        else {
            printf("Congratulations! You guessed the correct number.\n");
            printf("Number of guesses: %d\n", nguesses);
        }
        nguesses++;
    } while (guess!=num);
    
    
    return 0;
}