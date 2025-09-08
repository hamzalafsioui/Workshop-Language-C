#include<stdio.h>

// Challenge 3 : Tri par Sélection
// Écrivez un programme C qui implémente l'algorithme de tri par sélection pour trier un tableau d'entiers. Affichez le tableau avant et après le tri.

void TriSelection(int arr[],int n){

    int minIndex ;

    for (int i = 0; i < n-1; i++)
    {
        minIndex = i;

        // find Index of MInimun value
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        // swap 
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        
        
    }
    
}

void afficherTableau(int arr[],int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
} 



int main(){

int tableau[] = {53, 41, 27, 9, 24, 14, 88};
    int n = sizeof(tableau) / sizeof(tableau[0]); // size total of array / size of first element = number of elements

    printf("Tableau avant le tri :\n");
    afficherTableau(tableau, n);

    TriSelection(tableau, n);

    printf("Tableau apres le tri Selection :\n");
    afficherTableau(tableau, n);



    return 0;
}