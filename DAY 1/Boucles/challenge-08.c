#include <stdio.h>

// Challenge 8 : Affichage de la Suite de Fibonacci
// Écrivez un programme C qui génère les n premiers termes de la suite de Fibonacci, où n est entré par l’utilisateur. 
// La suite de Fibonacci est définie comme suit : F(0) = 0, F(1) = 1, et F(n) = F(n-1) + F(n-2).

int main (){

    int n;
    printf("entré combien de nombre qui vous faire génère: ");
    scanf("%d",&n);

    int a =0, b=1;
    int c;

    printf("%d %d",a,b); // only for visualization;
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        printf(" %d",c);
        a = b;
        b = c;
        
    }
    
    


    return 0;
}