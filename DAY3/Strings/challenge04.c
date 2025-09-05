#include<stdio.h>
#include<string.h>
// Challenge 4 : Comparaison de Chaînes
// Écrivez un programme C qui lit deux chaînes de caractères et compare si elles sont égales ou non. Affichez un message indiquant si les chaînes sont égales ou différentes.

int main(){

  char str1[100], str2[100];
  printf("Entrez la premiere chaine de caracteres : ");
  fgets(str1, sizeof(str1), stdin);
  printf("Entrez la deuxieme chaine de caracteres : ");
  fgets(str2, sizeof(str2), stdin);
  // Remove newline characters if present
  str1[strcspn(str1, "\n")] = 0;
  str2[strcspn(str2, "\n")] = 0;
  // Compare manually
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  if(len1 != len2) {
    printf("Les chaines sont differentes.\n");
    return 0;
  }
  
  int i = 0;
  while (str1[i] != '\0' && str2[i] != '\0') {
    if(str1[i] != str2[i]) {
      printf("Les chaines sont differentes.\n");
      return 0;
    }
    i++;
  }
  printf("Les chaines sont egales.\n");
  


  return 0;
}