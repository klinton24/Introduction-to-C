#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index = 3;
    int secretNumber = 7;
    int guess;
    while (guess != secretNumber && index > 0) {
        printf("Take a guess! You have %d guesses! Whats the secret number? (1-10)", index);
        scanf("%d", &guess);
        index--;
    }
    if (guess == secretNumber) {
        printf("Good job you guessed the magic number, %d.", secretNumber);
    } else {
        printf("You have failed! The magic number was %d.", secretNumber);
    }
    return 0;
}
