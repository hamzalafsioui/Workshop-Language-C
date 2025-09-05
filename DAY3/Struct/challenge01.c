
#include <stdio.h>

// Challenge 1 : Définition et Utilisation de Structure
// Écrivez un programme C qui définit une structure pour représenter une personne avec les champs nom, prenom, et age. Créez une variable de cette structure, assignez des valeurs aux champs, et affichez ces valeurs.

int main(){

  struct Personne {
    char nom[50];
    char prenom[50];
    int age;
  };

  struct Personne personne;

  printf("Entrez le nom de la personne : ");
  fgets(personne.nom, sizeof(personne.nom), stdin);
  printf("Entrez le prenom de la personne : ");
  fgets(personne.prenom, sizeof(personne.prenom), stdin);
  printf("Entrez l'age de la personne : ");
  scanf("%d", &personne.age);

  printf("Nom : %s", personne.nom);
  printf("Prenom : %s", personne.prenom);
  printf("Age : %d", personne.age);


  return 0;
}