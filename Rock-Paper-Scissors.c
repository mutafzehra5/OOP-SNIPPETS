#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;

    printf("Rock, Paper, Scissors Game\n");
    printf("Enter your choice:\n");
    printf("0 for Rock\n1 for Paper\n2 for Scissors\n");
    scanf("%d", &userChoice);

    // Seed random number generator
    srand(time(0));
    computerChoice = rand() % 3; // generates 0, 1, or 2

    // Display choices
    printf("You chose: ");
    if(userChoice == 0) printf("Rock\n");
    else if(userChoice == 1) printf("Paper\n");
    else if(userChoice == 2) printf("Scissors\n");
    else {
        printf("Invalid choice!\n");
        return 0;
    }

    printf("Computer chose: ");
    if(computerChoice == 0) printf("Rock\n");
    else if(computerChoice == 1) printf("Paper\n");
    else printf("Scissors\n");

    // Determine winner
    if(userChoice == computerChoice) {
        printf("It's a draw!\n");
    }
    else if((userChoice == 0 && computerChoice == 2) ||
            (userChoice == 1 && computerChoice == 0) ||
            (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    }
else {
        printf("You lose!\n");
    }

    return 0;
}