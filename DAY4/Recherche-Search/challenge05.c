#include<stdio.h>
#include<string.h>
// Challenge 5 : Recherche d'une Sous-chaîne
// Écrivez un programme C qui utilise la recherche linéaire pour trouver une sous-chaîne dans une chaîne de caractères. Affichez l'index de la première occurrence de la sous-chaîne ou un message indiquant que la sous-chaîne n'est pas trouvée.

int substringInString(char originalString[],char subString[]){
    int strLen = strlen(originalString);
    int subLen = strlen(subString);
    int found = 0;

    for (int i = 0; i <= strLen - subLen; i++)
    {
        // find first char
        if(originalString[i] == subString[0]){
            found = i;
            // complete checking
            int j = 0;
            for ( j = 1; j < subLen; j++)
            {
                if(originalString[j+i] != subString[j]){
                    found = 0;
                    break;
                }
            }
            
        }
         if (found) {
            return i;  // Found at index i
        }
    }

    return found;
    
}

int main(){
    
char str[100], substr[100];
  printf("Entrez la chaine de caracteres principale : ");
  fgets(str, sizeof(str), stdin);
  printf("Entrez la sous-chaine : ");
  fgets(substr, sizeof(substr), stdin);
  // Remove newline characters if present
  str[strcspn(str, "\n")] = 0;
  substr[strcspn(substr, "\n")] = 0;

  int found = substringInString(str,substr);
  if(found != 0){
    printf("Found at index %d \n",found);
  }else{
    printf("Not Found \n");

    return 0;
  }
}