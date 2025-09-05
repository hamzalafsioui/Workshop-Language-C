#include <stdio.h>
#include <string.h>

// Challenge 10 : Trouver un Sous-String
// Écrivez un programme C qui lit une chaîne de caractères principale et une sous-chaîne, puis vérifie si la sous-chaîne est présente dans la chaîne principale. Affichez un message indiquant si la sous-chaîne est trouvée ou non.

int main(){

  char str[100], substr[100];
  printf("Entrez la chaine de caracteres principale : ");
  fgets(str, sizeof(str), stdin);
  printf("Entrez la sous-chaine : ");
  fgets(substr, sizeof(substr), stdin);
  // Remove newline characters if present
  str[strcspn(str, "\n")] = 0;
  substr[strcspn(substr, "\n")] = 0;
  // Check if substr is in str manually
  int len = strlen(str);
  int sublen = strlen(substr);
  int found = 0; // false
  
  for (int i = 0; i <= len-sublen; i++)
  {
    if(str[i] == substr[0]){
      found = 1; // right now found first char
      int j = 0;
      for (j = 0; j < sublen; i++)
      {
         if(str[i+j] != substr[j]){
          found = 0; // not found 
          break;
        }
      }

      if(sublen == j){
        found = 1; // final checking 
        break;
      }
      
    }
  }
  
  if(found){
    printf("Found \n");
  }else{
    printf("Not Found \n");

  }

  return 0;
}