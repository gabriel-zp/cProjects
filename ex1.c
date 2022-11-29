#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

char user_input[10], username[10], password[10], confPassword[10], tempUsername[10], tempPassword[10];

int main()
{
    printf("Welcome!");

    while(1)
    {
        printf("\nRegister your username: ");
        gets(username);

        printf("\nRegister your password: ");
        gets(password);

        printf("\nConfirm your passowrd: ");
        gets(confPassword);

        
        if(strcmp(password,confPassword)==0){
            
            printf("User successfully registered! \n");
            

        } else {
            while(strcmp(password,confPassword) != 0){
                
                printf("Passwords doesn't match. \nRe-type your password: ");
                gets(password);

                printf("Confirm your password: ");
                gets(confPassword);
                
            }
            printf("\nSuccessfully registered!\n");
        }

        printf("\n====================");
        printf("\n       Login        \n");
        printf("====================\n");

        printf("\nEnter your username: ");
        gets(tempUsername);

        printf("Enter your password: ");
        gets(tempPassword);

        if(strcmp(username,tempUsername)==0){

            if(strcmp(password,tempPassword)==0){

                printf("\nSuccessfully logged in!\n");


            } else {

                printf("\nIncorrect password.\n");
                
                return 0;

            }

        }
        break;
    }
    printf("Hello, %s!\n",username);
    printf("There is some actions you might want to do: \n");
    printf("Type 'google chrome'.\n");
    printf("Type 'discord'. \n");
    printf("Type 'steam'. \n");
    printf("Type 'league of legends'. \n");
    printf("Or type 'exit'.\n");

    gets(user_input);

    if(strcmp(user_input,"google chrome")==0){

        printf("\nSure! Opening Google Chrome...");
        system("C:\\Program Files\\Google\\Chrome\\Application\\chrome");

    } else if (strcmp(user_input,"discord")==0){

        printf("\nSure! Opening discord...");
        system("Start C:\\Users\\Gabriel Zimmermann\\AppData\\Local\\Discord\app-1.0.9007\\Discord");

    } else if (strcmp(user_input,"steam")==0){

        printf("\nSure! Opening Steam...");
        system("Start D:\\Steam\\steam");

    } else if (strcmp(user_input, "league of legends")==0){

        system("Start D:\\Riot Games\\League of Legends\\LeagueClient");

    }

}

