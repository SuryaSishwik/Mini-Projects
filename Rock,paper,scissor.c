#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <string.h>

int main()
{   
    int n;
    printf("*** Instructions ***\n");
    printf("Only 3 options \n\tfor Rock choose 1\n\tfor Paper choose 2\n\tfor Scissors choose 3\n");
    printf("Choose how many times do you want to play: ");
    scanf("%d",&n);
    int botcount=0,youcount=0;
    for(int i=0; i<n; i++)
    {   
        int value;
        srand(time(NULL));
        value = rand() % 9 + 1;
        int num;
        printf("Choose your option: ");
        scanf("%d",&num);
        char bot[10]={0},you[10]={0},winner[10]={0};
        if(num==1)
        {
            strcpy(you,"rock");
        }
        else if(num==2)
        {
            strcpy(you,"paper");
        }
        else
        {
            strcpy(you,"scissor");
        }
        if(value==1||value==4||value==7)
        {
            strcpy(bot,"rock");
        }
        else if(value==2||value==5||value==8)
        {
            strcpy(bot,"paper");
        }
        else
        {
            strcpy(bot,"scissor");
        }
        if((strcmp(bot,"paper")==0 && strcmp(you,"scissor")==0) || (strcmp(bot,"rock") == 0 && strcmp(you,"paper") == 0)||(strcmp(bot,"scissor") == 0 && strcmp(you,"rock") == 0))
        {
            strcpy(winner,"you");
            youcount++;
        }
        else if((strcmp(bot,"paper") == 0 && strcmp(you,"rock") == 0) || (strcmp(bot,"rock") == 0 && strcmp(you,"scissor") == 0 ) || (strcmp(bot,"scissor") == 0 && strcmp(you,"paper") == 0))
        {
            strcpy(winner,"bot");
            botcount++;
        }
        else{
            strcpy(winner,"Tie");
        }
        printf("Bot: %s |You:  %s |Winner: %s\n",bot,you,winner);
    }
    
   if(botcount>youcount)
    {
         printf("Bot is winner 😎");
    }
    else{
        printf("You are winner 😊");
    }
}
