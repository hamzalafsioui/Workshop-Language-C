#include <stdio.h>

// Challenge 4 : Recherche de l'Élément Maximum
// Écrivez un programme C qui utilise une recherche linéaire pour trouver le maximum dans un tableau d'entiers. Affichez la valeur maximale et son index.

typedef struct {
    int max ;
    int maxIndex;
}stFindMax;
stFindMax FindMax(int arr[],int size){
    stFindMax findMax;
    findMax.max = arr[0]; // first element as min value
    findMax.maxIndex = 0; // 
    for (int i = 1; i < size; i++)
    {
        if(arr[i]>findMax.max){
            findMax.max = arr[i];
            findMax.maxIndex = i;
        }
    }

    return findMax; // i use struct in this problem solving to return 2 vr
    
}
int main(){
int tableau[] = {53, 41, 27, 9, 24, 14, 88};
    int n = sizeof(tableau) / sizeof(tableau[0]); // size total of array / size of first element = number of elements
    int number = 99;
    stFindMax findMax = FindMax(tableau,n);
    printf("Max value is %d Exist at Index %d -) \n",findMax.max,findMax.maxIndex);
   



    return 0;
}