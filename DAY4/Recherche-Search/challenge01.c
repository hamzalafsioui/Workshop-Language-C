#include<stdio.h>
#include<stdbool.h>
// Challenge 1 : Recherche Linéaire
// Écrivez un programme C qui implémente l'algorithme de recherche linéaire pour trouver un élément dans un tableau d'entiers. Affichez si l'élément est trouvé ou non.

bool LinearSearch(int arr[],int size,int number){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == number){
            return true;
        }
    }
    return false;
    
}
int main(){

    int tableau[] = {53, 41, 27, 9, 24, 14, 88};
    int n = sizeof(tableau) / sizeof(tableau[0]); // size total of array / size of first element = number of elements
    int number = 24;
    if(LinearSearch(tableau,n,number)){
        printf("Found -) \n");
    }else{
        printf("Not Found -) \n");

    }

    return 0;
}