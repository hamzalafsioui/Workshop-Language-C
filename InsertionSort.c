#include<stdio.h>


// 53, 41, 27, 9, 24, 14, 88
void InsertionSort(int arr[],int size){

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i-1;

        while (j>=0 && arr[j]>key) // j+1 => key
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        
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

    InsertionSort(tableau, n);

    printf("Tableau apres le tri Insertion :\n");
    afficherTableau(tableau, n);



    return 0;
}