
#include <stdio.h>

// Challenge 12 : Comparaison d'Instants
// Écrivez un programme C qui lit deux instants dans le format HH:MM:SS et affiche un des messages suivants :

// Le premier instant vient avant le deuxième ;
// Le deuxième instant vient avant le premier ;
// Il s'agit du même instant.

int main (){

    int h1,m1,s1;
    int h2,m2,s2;

    // instant t1
    printf("entre les donnes de L'instant 1 avec cette format HH:MM:SS");
    scanf ("%d %d %d",&h1,&m1,&s1);
    

    // instant t2
    printf("entre les donnes de L'instant 2 avec cette format HH:MM:SS");
    scanf ("%d %d %d",&h2,&m2,&s2);

    // convert instant to second at t1 t2 
    int t1 = h1 * 3600 + m1 *60+s1;
    int t2 = h2 * 3600 + m2 *60+s2;

    if(t1>t2){

        printf("Le premier instant vient avant le deuxième");

    }
    else if(t2>t1){

    
        printf("Le deuxième instant vient avant le premier");

    }else
    {
        printf("Il s'agit du même instant.");
    }

    return 0;
}