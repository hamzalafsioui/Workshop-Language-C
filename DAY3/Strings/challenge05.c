#include<stdio.h>
#include<string.h>

// Challenge 5 : Inversion de Chaîne
// Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne inversée. Par exemple, si la chaîne est "abcd", le programme doit afficher "dcba".
int main(){

  char str[100], reversed[100];
  printf("Entrez une chaine de caracteres : ");
  fgets(str, sizeof(str), stdin);
  // Remove newline character if present
  str[strcspn(str, "\n")] = 0;
  // Reverse manually
  int len = strlen(str);
  for (int i = 0; i < len; i++)
  {
    reversed[i] = str[len - 1 - i];
  }
  reversed[len] = '\0'; // Null-terminate the reversed string
  printf("La chaine inversee est : %s\n", reversed);
  
  


  return 0;
}