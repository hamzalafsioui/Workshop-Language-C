#include<stdio.h>
#include<string.h>

// Challenge 6 : Compte des Occurrences d'un Caractère
// Écrivez un programme C qui lit une chaîne de caractères et un caractère, puis compte et affiche combien de fois le caractère apparaît dans la chaîne.

int main(){

  char str[100], ch;
  int count = 0;
  printf("Entrez une chaine de caracteres : ");
  fgets(str, sizeof(str), stdin);
  printf("Entrez un caractere a chercher : ");
  scanf(" %c", &ch); // Space before %c to consume any leftover newline character
  // Remove newline character if present
  str[strcspn(str, "\n")] = 0;
  // Count manually
  int len = strlen(str);
  for (int i = 0; i < len; i++)
  {
    if (str[i] == ch)
    {
      count++;
    }
  }
  printf("Le caractere '%c' apparait %d fois dans la chaine.\n", ch, count);

  return 0;
}