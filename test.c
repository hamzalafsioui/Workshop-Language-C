#include <stdio.h>


int main() {
    
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 3, 3};
    int size = (sizeof(arr)/sizeof(arr[0]));
    int maxLength = 0,currentLength = 0, maxNumber = 0;
    for (int i = 1; i < size; i++)
    {
        if(arr[i] == arr[i-1]){
            currentLength++;
        }else{
            if(currentLength>maxLength){
                maxLength = currentLength;
                maxNumber = arr[i-1];
            }
            
            currentLength = 1;
        }

    }
    if(currentLength>maxLength){
        maxLength = currentLength;
        maxNumber = arr[size-1];
    }


    printf("NUmber: %d repeat: %d",maxNumber,maxLength);
    

    return 0;
}
