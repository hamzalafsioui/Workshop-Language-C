#include<stdio.h>

// Challenge 1 : Affichage d'une Chaîne
// Écrivez un programme C qui lit une chaîne de caractères entrée par l'utilisateur et l'affiche à l'écran.


int main(){

    char chaine_De_Caracteres [100];

    printf("Enter une chaîne de caractères pour affiche à l'écran\n");
    fgets(chaine_De_Caracteres,sizeof(chaine_De_Caracteres),stdin);
    chaine_De_Caracteres[strcspn(chaine_De_Caracteres,"\n")] = 0;

    int leng = strlen(chaine_De_Caracteres);

    
    printf("%s\n", chaine_De_Caracteres);
    for (int i = 0; i < leng; i++)
    {
        printf("%c", chaine_De_Caracteres[i]);
    }
    
 printf("\n");

    return 0;
}