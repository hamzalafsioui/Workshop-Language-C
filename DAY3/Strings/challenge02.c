#include<stdio.h>
#include<string.h>
// Challenge 2 : Longueur de la Chaîne
// Écrivez un programme C qui calcule et affiche la longueur d'une chaîne de caractères sans utiliser la fonction strlen().


int main (){

    char str[100];
    int length = 0;

    printf("Entrez une chaine de caracteres : ");
    fgets(str, sizeof(str), stdin);

    // Calculate length manually
  while (str[length] != '\n' && str[length] != '\0')
  {
    length++;
  }

  printf("Longueur de chaine est : %d\n",length);
  printf("Longueur de chaine est : %d\n",(int)strlen(str)-1); // -1 to exclude newline character

    return 0;



}