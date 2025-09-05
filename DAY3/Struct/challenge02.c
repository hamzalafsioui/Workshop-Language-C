#include <stdio.h>
#include <string.h>
// Challenge 2 : Structure avec Tableau
// Écrivez un programme C qui définit une structure pour représenter un étudiant avec les champs nom, prenom, et un tableau d'entiers pour stocker les notes. Assignez des valeurs aux champs et aux notes, puis affichez les informations de l'étudiant.



int main(){

  struct stEtudiant
  {
    char non[50];
    char prenom[50];
    int notes[5]; // 5 notes
  };

  struct stEtudiant etudiants[10]; 
  // assign values

  strcpy(etudiants[0].non, "Tofik");
  strcpy(etudiants[0].prenom, "Said");
  etudiants[0].notes[0] = 10;
  etudiants[0].notes[1] = 17;
  etudiants[0].notes[2] = 5;
  etudiants[0].notes[3] = 13;
  etudiants[0].notes[4] = 11;

  // print 

  printf("%s %s\n", etudiants[0].non, etudiants[0].prenom);

  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", etudiants[0].notes[i]);
  }


  return 0;
}