#include <stdio.h>
#include <string.h>

// Challenge 8 : Conversion en Minuscules
// Écrivez un programme C qui lit une chaîne de caractères et convertit tous les caractères en minuscules. Affichez la chaîne modifiée.



int main(){

  char str[100];
  printf("Entrez une chaine de caracteres : ");
  fgets(str, sizeof(str), stdin);
  // Remove newline character if present
  str[strcspn(str, "\n")] = 0;
  // Convert to lowercase manually
  int len = strlen(str);
  for (int i = 0; i < len; i++)
  {
    if(str[i] >='A' && str[i] <= 'Z'){
      str[i] = str[i] + 32; // Convert to lowercase by adjusting ASCII value ('a' - 'A' = 32 ) 97 - 65 = 32
    }
    
  }
  printf("Chaine en minuscules : %s\n", str);
  



  return 0;
}