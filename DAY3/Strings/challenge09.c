
#include <stdio.h>
#include <string.h>
// Challenge 9 : Suppression des Espaces
// Écrivez un programme C qui lit une chaîne de caractères et supprime tous les espaces. Affichez la chaîne résultante.

int main(){
  char str[100], result [100];
  printf("Entrez une chaine de caracteres : ");
  fgets(str, sizeof(str), stdin);
  // Remove newline character if present
  str[strcspn(str, "\n")] = 0;
  // Remove spaces manually
  int j = 0;
  int len = strlen(str);
  for (int i = 0; i < len; i++)
  {
    if(str[i] != ' '){
      result[j] = str[i];
      j++;
    }
  }
  result[j] = '\0'; // Null-terminate the result string
  printf("Chaine sans espaces : %s\n", result);
  
}