#include <stdio.h>


// Challenge 3 : Passage de Structure en Argument
// Écrivez un programme C qui définit une structure pour représenter un rectangle avec les champs longueur et largeur. Écrivez une fonction qui prend une variable de cette structure en argument et calcule l'aire du rectangle. Affichez l'aire dans le programme principal.


 typedef struct {
    float length;
    float width;
  } stRectangle;

float rectangleArea(stRectangle rect){
  return rect.length * rect.width; 
}

int main(){
 

  stRectangle rect;
  rect.length = 10.0;
  rect.width = 20.0;

  printf("Air de rectangle: %.2f",rectangleArea(rect));
  



  return 0;
}