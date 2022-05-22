//
//  main.c
//  PFPC
//
//  Created by Ismaël Bresson on 18/05/2022.
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
    char player = 'o' ;
    char cpu = 'o';
    int win = -1;
    srand(time(0));
    printf("Pierre Feuille Ciseaux \n");
    printf("tapez respectivement P, F & C \n \n");
while(1)
{
    //jeux
    char choice[] = {'P','F','C'};
    do
    {
        
        // générateur de signe aleatoire
        int rng = rand() %3;
        
        cpu = choice[rng];
      /*  switch (rng)
        {
            case 0 :
                cpu = 'P';
                break;
            case 1 :
                cpu = 'F';
                break;
            case 2 :
                cpu = 'C';
                break;
            default:
                cpu = 'o';
                break;
        }
       */
        
        //lettre du cpu pour le debug
        //printf("%c",cpu);
        
        //lire la saisie du joueur
        printf("a vous :");
        scanf(" %[P,F,C,p,f,c]",&player);
        player = toupper(player);
        printf("adversaire :%c \n",cpu);
    }
        
    while (player == cpu);
    
    //verification de qui a gagnié
    switch (cpu)
    {
        case 'C':
            if (player == 'P')
                win = 1;
            else
                win = 0 ;
            break;
        case 'P':
            if (player == 'F')
                win = 1;
            else
                win = 0 ;
            break;
        case 'F':
            if (player == 'C')
                win = 1;
            else
                win = 0 ;
            break;
            
        default:win = -1;
            break;
    }
    
    
    // afichage des résulat
    printf("\n");
    if (win == 1)
        printf("vous avez gagné!!");
    else if (win == 0)
        printf("vous avez perdu!!");
    else
    {
        //ereur de signe non coérent
        printf("\n");
        return 1;
    }
    
    printf("\n");
    //fin de boucle
}
    printf("\n");
    return 0;
}
