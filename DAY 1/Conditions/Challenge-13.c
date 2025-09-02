#include <stdio.h>


// Challenge 13 : Point sur un Segment
// Écrivez un programme C qui lit les coordonnées des deux extrémités d'un segment, et lit ensuite les coordonnées d'un point dans le plan et dit si ce dernier se trouve ou non sur le segment.
int main() {


    printf("\n\n");


    float Ax,Ay,Bx,By;
    float X,Y;

    printf("Entre les coordonnées de point A: ");
    scanf("%f %f",&Ax,&Ay);

    printf("Entre les coordonnées de point B: ");
    scanf("%f %f",&Bx,&By);

     printf("Entre les coordonnées de point C dans le plan: ");
    scanf("%f %f",&X,&Y);

    // will be using det 
    float det = (Bx - Ax)*(Y - Ay) - (By- Ay)*(X - Ax);


    printf("%f %f %f %f %f",Ax,Ay,Bx,By);


    printf("\n\n");
    return 0;
}
