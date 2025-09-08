#include<stdio.h>

// Challenge 3 : Recherche de l'Élément Minimum
// Écrivez un programme C qui utilise une recherche linéaire pour trouver le minimum dans un tableau d'entiers. Affichez la valeur minimale et son index.
typedef struct {
    int min ;
    int minIndex;
}stFindMin;
stFindMin FindMin(int arr[],int size){
    stFindMin findMin;
    findMin.min = arr[0]; // first element as min value
    findMin.minIndex = 0; // 
    for (int i = 1; i < size; i++)
    {
        if(arr[i]<findMin.min){
            findMin.min = arr[i];
            findMin.minIndex = i;
        }
    }

    return findMin; // i use struct in this problem solving to return 2 vr
    
}
int main(){
int tableau[] = {53, 41, 27, 9, 24, 14, 88};
    int n = sizeof(tableau) / sizeof(tableau[0]); // size total of array / size of first element = number of elements
    int number = 99;
    stFindMin findMin = FindMin(tableau,n);
    printf("Min value is %d Exist at Index %d -) \n",findMin.min,findMin.minIndex);
   


    return 0;
}