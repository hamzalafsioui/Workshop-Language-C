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

    if(det != 0){
        printf("Ne sont pas alignes => point se ne trouve pas sur le segment");
        return 0;
    }

    // est ce que point C for example entre A et B


    if(X < (Ax<(Bx ? Bx : Ax)) || (Ax>Bx ? Bx : Ax)){
        printf("point C n'est pas entre A et B => point se ne trouve pas sur le segment");
        return 0;
    }
     if(Y < (Ay<(By ? By : Ay)) || (Ay>By ? By : Ay)){
        printf("point C n'est pas entre A et B => point se ne trouve pas sur le segment");
        return 0;
    }





    printf("%f %f %f %f %f",Ax,Ay,Bx,By);


    printf("\n\n");
    return 0;
}
