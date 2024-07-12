#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, botCount = 0, playerCount = 0;
    int game = 1;
    
    srand(time(NULL));

    while (game) {
        randomNumber = rand() % 9 + 1; 
        int player;
        scanf("%d", &player); 
        
        if (player == randomNumber) {
            game = 0; 
        }
        if(player<1||player>9)
        {
            game=0;
        }
        
        playerCount += player;
        botCount += randomNumber;
        printf("Player choice: %d\n", player);
        printf("computer choice: %d\n", randomNumber);
    }
        if(playerCount==botCount)
        {
            printf("\nIt's tie!\n");
        }
        else if(playerCount>botCount)
        {
            printf("\nYou are winner!\n");
        }
        else{
            printf("\nComputer is winner!\n");
        }
        printf("playercount: %d\n",playerCount);
        printf("computer count: %d",botCount);

    
    
    
    return 0;
}
