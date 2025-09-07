#include<stdio.h>

// Challenge 2 : Tri par Insertion
// Écrivez un programme C qui implémente l'algorithme de tri par insertion pour trier un tableau d'entiers. Affichez le tableau avant et après le tri.


// 53, 41, 27, 9, 24, 14, 88
void TriInsertion(int arr[],int n){
  
  for (int i = 1; i < n; i++)
  {
    int key = arr[i];
    int j = i-1;

    while (arr[j]>key && j>= 0)
    {
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key; // j + 1 = 0 (key < all sorted elements) or i (key > all sorted elements)
    

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

    TriInsertion(tableau, n);

    printf("Tableau apres le tri Insertion :\n");
    afficherTableau(tableau, n);


  return 0;
}