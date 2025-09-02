#include<stdio.h>




// Challenge 13 : Affichage des valeurs binaire et hexadécimale équivalentes
// Écrivez un programme C pour afficher la valeur équivalente en binaire et en hexadécimal. Entrez un nombre entier et affichez ses valeurs équivalentes en binaire et en hexadécimal.



int main (){

    printf("\n\n\n");

    int numberEntier = 6;

    int mcd = 32;

    while (mcd >=0)
    {
    
        printf("%d",numberEntier>>mcd & 1);
        mcd--;
        
    }
    


    printf("\n\n\n");





    return 0;
}