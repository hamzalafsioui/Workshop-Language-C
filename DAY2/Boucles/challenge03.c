#include<stdio.h>
#include <stdbool.h>
// Challenge 3 : Affichage des Nombres Premiers
// Écrivez un programme C qui lit un entier n et affiche tous les nombres premiers de 1 à n. Un nombre est considéré premier s'il est divisible uniquement par 1 et lui-même.

int main(){
 int n;
    printf("Entrez un entier n : ");
    scanf("%d", &n);

    printf("Nombres premiers de 1 à %d :\n", n);

    if(n>=2)
    printf("2 ");  // 1er number entier


    for (int i = 3; i <= n; i+=2) {
        bool premier = true;

        for (int j = 3; j <= i/2; j++) {
            if (i % j == 0) {
                premier = false;
                break;
            }
        }

        if (premier) {
            printf("%d ", i);
        }
    }

    printf("\n");
    
    return 0;
}