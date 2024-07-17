#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char answer;
    do {
        int random, guessed, nog = 0;
        
        srand(time(NULL));
        random = rand() % 100 + 1;
        printf("Welcome to the Number guessing game\n"); 
        
        do {
            printf("Please enter your Guess between 1-100: ");
            scanf("%d", &guessed);
            nog++;
            if (guessed < random) {
                printf("Guess a higher number \n");
            } else if (guessed > random) {
                printf("Guess a lower number \n");
            }
        } while (guessed != random);
        
        printf("You got it right!!! in %d guesses \n", nog);
        printf("Do you want to play again? (y/n): ");
        

        while ((getchar()) != '\n'); // Clear the input buffer

        scanf("%c", &answer); 
    } while (answer == 'y' || answer == 'Y');
    
    printf("Thank you for playing \n");
    
    return 0;
}
