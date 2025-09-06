#include<stdio.h>
#include<stdlib.h>
// Challenge 4 : Structure avec Pointeurs
// Écrivez un programme C qui définit une structure pour représenter un point dans un plan avec les champs x et y. Utilisez des pointeurs pour créer une variable de cette structure et modifiez ses valeurs. Affichez les valeurs du point.

typedef struct 
{
  int x;
    int y;
} stPoint;

int main(){

  stPoint *point = (stPoint *)malloc(sizeof(stPoint));  // allocation dynamique

  if(point == NULL){
    printf("Error d'allocate memoire\n");
    return 1;
  }

  point->x = 10;
  // (*point).x = 30;
  point->y = 20;


  printf("x = %d\n",point->x);
  printf("y = %d\n",point->y);

  free(point); // free memory


  return 0;
}