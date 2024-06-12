// Nedded libraries
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main()
{
    int num;
    srand(time(0));
    num = rand() % 100; // Generate random number between 1a and 100
    printf("Random number between 1 and 100: %d\n", num);
    // Keep running the loop until  the number is guessed
    return 0;
}