#include<stdio.h>

// Challenge 1 : Tri à Bulles
// Écrivez un programme C qui implémente l'algorithme de tri à bulles pour trier un tableau d'entiers. Affichez le tableau avant et après le tri.


// 53, 41, 27, 9, 24, 14, 88
void triBullesCroissant(int arr[],int n){

  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < n-i-1; j++) // why - i because the last ones are already sorted
    {
      if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
    
  }
  
}
void triBullesDecroissant(int arr[],int n){

  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < n-i-1; j++)
    {
      if(arr[j]<arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
    
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

    triBullesCroissant(tableau, n);

    printf("Tableau apres le tri croissant :\n");
    afficherTableau(tableau, n);

    triBullesDecroissant(tableau,n);
    printf("Tableau apres le tri decroissant :\n");
    afficherTableau(tableau, n);
}