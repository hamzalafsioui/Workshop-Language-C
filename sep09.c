#include<stdio.h>
#include<stdbool.h>
#include<string.h>

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

void Mirror(){
    int arr[] = {1,2,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size/2; i++)
    {
        if(arr[i] != arr[size-1-i]){
            printf(" not mm");
            return;
        }

    }
    printf("  mm");

    
}

void test2(){

    char str[] =  "education";
    int vowelsCounter = 0, conCounter = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'o' ||str[i] == 'u' ||str[i] == 'y' ||str[i] == 'i' ){
            vowelsCounter++;
        }else{
            conCounter++;
        }
    }
    if(vowelsCounter > conCounter){
        printf("voweels");
    }else{
        printf("const");
    }
    
}
bool isContainMoreThan11(int arr[],int size,int number){
    
}
void Test3(){
      int arr[] = {1,2,2,2,3,3,6,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int Count = 0;
    for (int i = 0; i < size; i++)
    {
    int currentNUmber = arr[i];
    int numberDoubleCounter = 0;
    for (int j = 0; j < size; j++)
    {
        if(j==i){
            break;
        }

       if(arr[j] != currentNUmber){
         numberDoubleCounter ++;
       }
    }
    if(numberDoubleCounter <1){
        Count ++;
    }
   
    
        
    }
    printf("%d ",Count);
    

}


int main(){
    // Mirror();
    // test2();
    Test3();
// int arr[] = {1,2,2,3,4,4,5};
// int arr2[] = {7,7,7,7};
// int arr3[] = {10,20,30,40};
// int size = sizeof(arr3)/sizeof(arr3[0]);
// int uniqueNUmber = 0;
// for (int i = 0; i < size; i++)
// {
//     if(!isContainMoreThan1(arr3,size,arr3[i])){
//         uniqueNUmber ++;
//     }
// }

// printf("UNique NUmber: %d",uniqueNUmber);



//     return 0;
// }


}