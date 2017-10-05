#include <stdio.h>
#include <stdlib.h> // MUST HAVE STDLIB TO USE RAND

// Michael Consuegra

int main()
{
    int Rock=0;
    int Paper=1;
    int Scissors=2;
    int i,n,x,y;
    int num;





    printf(" Welcome to Michael Consuegra version of Rock, Paper, Scissors\n\n");
    //printf("Would you like to play (Type 1 for yes or 2 for no)\n");
    //scanf("%c",yes);

for(x=0;x<10;x++)

    {


    printf(" Select Rock(0), Paper(1) or Scissors(2) to play \n\n");
    scanf("%d",&num);


{

{
    if(num==2)
    {
      printf("You selected Scissors\n");
    }
    else if(num==1)
    {
        printf("You selected Paper\n");
    }

    else if(num==0)
    {
        printf("You selected Rock\n");

    }


    for(i=0;i<1;i++)     // FOR loops goes through once and will print out a random number between 0 to 2.

   {
        i=rand()%3;
        printf("%d\n",i); // THIS HERE IS TO SHOW WHAT NUMBER THE COMPUTER IS RANDOMLY GENERATING.

        //i=rand()%3;

        if(i==0)
        {
            printf("LOLA SELECTION WAS...\n\nROCK\n");
        }
        else if(i==1)
        {
            printf("LOLA SELECTION WAS...\n\nPAPER\n");
        }
        else if(i=2)

        {
            printf("LOLA SELECTION WAS...\n\nSCISSORS\n");
        }
        if(num==i)
        {
            printf("I's a Draw!\n");
        }
   if(num==0 && i==1)
   {
       printf("Paper Beats Rock, you lose!\n");

   }
    if (num==1 && i==2)
    {
        printf("Scissors beats Paper, you lose!\n");
    }

   if(num==1 && i==0 )
    {
        printf("Paper beats Rock, you win!\n");
    }

    if(num==2 && i==1)
    {
    printf("Scissors beats Paper, you win!\n");
    }
    if (num==2 && i==0)
    {
    printf("Rock beats Scissors, you lose!\n");
    }

    if(num==0 && i==2)
    {
        printf("Rock beats Scissors, you win!\n");
    }

    }
   }
    }
    }
return 0;
    }




