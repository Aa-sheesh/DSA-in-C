#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int win = 0;
    int loss, tie = 0;
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("We will play the game that would be best of 5.\n");
    while (win + loss + tie != 5)
    {
        char playerChoice[10];
        printf("Enter your choice (rock, paper, or scissors): ");
        scanf("%s", playerChoice);
        printf("You chose %s\n", playerChoice);
        char computerChoice[10];
        int random = rand() % 3;
        if (random == 0)
        {
            strcpy(computerChoice, "rock");
        }
        else if (random == 1)
        {
            strcpy(computerChoice, "paper");
        }
        else
        {
            strcpy(computerChoice, "scissors");
        }
        printf("The computer chose %s\n", computerChoice);
        if (strcmp(playerChoice, computerChoice) == 0)
        {
            printf("It's a tie!\n");
            tie++;
        }
        else if ((strcmp(playerChoice, "rock") == 0 && strcmp(computerChoice, "scissors") == 0) ||
                 (strcmp(playerChoice, "paper") == 0 && strcmp(computerChoice, "rock") == 0) ||
                 (strcmp(playerChoice, "scissors") == 0 && strcmp(computerChoice, "paper") == 0))
        {
            printf("You win!\n");
            win++;
        }
        else
        {
            printf("You lose!\n");
            loss++;
        }
        printf("Wins: %d, Losses: %d, Ties: %d\n", win, loss, tie);
    }

    return 0;
}
