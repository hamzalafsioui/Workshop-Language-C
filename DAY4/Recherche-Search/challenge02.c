#include<stdio.h>

// Challenge 2 : Recherche Binaire
// Écrivez un programme C qui implémente l'algorithme de recherche binaire pour trouver un élément dans un tableau d'entiers trié. Affichez l'index de l'élément recherché ou un message indiquant que l'élément n'est pas trouvé.

int BinarySearch(int arr[],int size,int number){
    int start = 0,end = size-1;
    while (start <= end)
    {
        int middle = (end-start)/2 + start;
        if(arr[middle] == number){
            return middle;
        }
        
        else if(number<arr[middle]){
            end = middle -1;
        }
        else{
            start = middle +1;
        }
    }

    return -1;
    

}
int main(){

int tableau[] = {9,12,34,56,73,81,99};
    int n = sizeof(tableau) / sizeof(tableau[0]); // size total of array / size of first element = number of elements
    int number = 99;
    int index = BinarySearch(tableau,n,number);
    if(index != -1){
        printf("Found at Index %d -) \n",index);
    }else{
        printf("Not Found -) \n");

    }
}