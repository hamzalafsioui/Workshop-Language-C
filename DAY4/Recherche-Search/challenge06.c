#include<stdio.h>

// Challenge 6 : Recherche de Duplication
// Écrivez un programme C qui implémente une recherche linéaire pour vérifier si un tableau d'entiers contient des doublons. Affichez un message indiquant s'il y a des doublons ou non.

int checkDouble(int arr[],int size){
    int isFound = 0;
    int currentNumber;
    for (int i = 0; i < size; i++)
    {
        currentNumber = arr[i];
        for (int j = 0; i < size; i++)
        {
            if(j == i)
                continue;
            if(arr[j] == currentNumber){
                isFound = 1;
                break;
            }
        }
        if (isFound)
        {
            return 1; // printf("Double is found")
        }
        
        
    }
    return 0;
    
}

int main(){

    int numbers[] = {1,2,3,4,56,7,54};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    if(checkDouble(numbers,size)){
        printf("tableau d'entiers contient des doublons.");
    }else{
        printf("tableau d'entiers ne contient pas des doublons.");

    }



    return 0;
}