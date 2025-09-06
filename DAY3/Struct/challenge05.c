#include<stdio.h>
#include <string.h>
// Challenge 5 : Structure et Fonction de Retour
// Écrivez un programme C qui définit une structure pour représenter un livre avec les champs titre, auteur, et année. Écrivez une fonction qui retourne une variable de cette structure initialisée avec des valeurs données. Affichez les informations du livre dans le programme principal.

typedef struct{
  char titre[50];
  char auteur[50];
  int anne;
} Livre;


// char title[], char auteur[] crée un tableau, pointer is read-only
Livre creeLivre(const char *title,const char *auteur,int anne){
  Livre livre1;
  strcpy(livre1.titre,title);
  strcpy(livre1.auteur,auteur);
  livre1.anne = anne;

  return livre1;
}



int main(){

  Livre livre = creeLivre("Save Yourself","Hamza",24);

  printf("Title: %s | Auteur: %s | Anne: %d",livre.titre,livre.auteur,livre.anne);

  return 0;
}