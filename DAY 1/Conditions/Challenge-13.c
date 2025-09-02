#include <stdio.h>


// Challenge 13 : Point sur un Segment
// Écrivez un programme C qui lit les coordonnées des deux extrémités d'un segment, et lit ensuite les coordonnées d'un point dans le plan et dit si ce dernier se trouve ou non sur le segment.
int main() {


    printf("\n\n");


    int Ax,Ay,Bx,By;

    printf("Entre les coordonnées de point A: ");
    scanf("%d %d",&Ax,&Ay);

    printf("Entre les coordonnées de point B: ");
    scanf("%d %d",&Bx,&By);


    printf("%d %d %d %d %d",Ax,Ay,Bx,By);
    return 0;
}
