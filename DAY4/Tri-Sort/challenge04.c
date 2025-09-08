#include<stdio.h>

// Challenge 4 : Tri Rapide
// Écrivez un programme C qui implémente l'algorithme de tri rapide pour trier un tableau d'entiers. Affichez le tableau avant et après le tri.

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int pivotPosition(int arr[] ,int low,int high){
    int pivot = arr[low];

    int i = low;
    int j = high;
    
    while (4)
    {
       
    
    while (i <= high && arr[i]<pivot)
    {
        i++;
    }


    while ( j>= low && arr[j] > pivot)
    {
        j--;
    }
    
    if(i>=j)
        return j; // return p of pivot

    swap(&arr[i],&arr[j]); 
    }

    
}

void afficherTableau(int arr[],int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
} 

int main(){
   int tableau[] = {10,16,8,12,15,6,3,9,5};
    int n = sizeof(tableau) / sizeof(tableau[0]); // size total of array / size of first element = number of elements

    printf("Tableau avant le tri :\n");
    afficherTableau(tableau, n);

    
     printf("pivot possition: %d ",pivotPosition(tableau,0,8));

    printf("Tableau apres le tri rapide :\n");
    afficherTableau(tableau, n);
    return 0;
}