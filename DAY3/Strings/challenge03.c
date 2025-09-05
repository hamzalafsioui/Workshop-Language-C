#include<stdio.h>
#include<string.h>
int main(){

//   Challenge 3 : Concaténation de Chaînes
// Écrivez un programme C qui lit deux chaînes de caractères et les concatène en une seule chaîne. Affichez la chaîne résultante.

char str1[100], str2[100], result[200];
printf("Entrez la premiere chaine de caracteres : ");
fgets(str1, sizeof(str1), stdin);
printf("Entrez la deuxieme chaine de caracteres : ");
fgets(str2, sizeof(str2), stdin);

// Remove newline characters if present
str1[strcspn(str1, "\n")] = 0;
str2[strcspn(str2, "\n")] = 0;

// Concatenate manually
int i = 0, j = 0;
while (str1[i] != '\0') {
    result[i] = str1[i];
    i++;
}
while (str2[j] != '\0')
{
  result[i] = str2[j];
    i++;
    j++;
}
  result[i] = '\0'; // Null-terminate the result string


  printf("Chaine concatenee : %s\n", result);





  return 0;
}