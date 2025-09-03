#include<stdio.h>

// Challenge 2 : pyramide d'étoile
//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
// *************
// Écrire le programme pour avoir un pyramide d'étoile, le nombre des lignes à composer est demandé à l’utilisateur.(chaque ligne doit avoir un nombre premier d'étoiles.

int main(){

    int number = 0;

    printf("Enter nomber des lignes\n");
    scanf("%d",&number);

    for (int i = 1; i <=  number; i++)
    {
        // print space 
        for (int j = 0; j <= number-i; j++)
        {
            printf(" ");
        }
        // print stars
        for (int s = 0; s < (2*i-1) ; s++)
        {
            printf("*");
            
        }

        printf("\n");
        

        
    }
    




    return 0;
}