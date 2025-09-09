#include<stdio.h>
#include<stdbool.h>

bool isContainMoreThan1(int arr[],int size,int number){

    int NUmberCounter = 0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == number){
            NUmberCounter++;
        }
    }

    return NUmberCounter>1;
    
}

int main(){
int arr[] = {1,2,2,3,4,4,5};
int arr2[] = {7,7,7,7};
int arr3[] = {10,20,30,40};
int size = sizeof(arr3)/sizeof(arr3[0]);
int uniqueNUmber = 0;
for (int i = 0; i < size; i++)
{
    if(!isContainMoreThan1(arr3,size,arr3[i])){
        uniqueNUmber ++;
    }
}

printf("UNique NUmber: %d",uniqueNUmber);



    return 0;
}


