#include<stdio.h>

int main(){

    int tableau [] = {1,2,3,5,7,8,12,53,67,89};
    int len = sizeof(tableau)/ sizeof(tableau[0]);
    int SearchNumber = 0;

    printf("PLease enter NUmber N: ");
    scanf("%d",&SearchNumber);

    int start = 0;
    int end = len-1;

    while (start<end)
    {
        int Middle = start + (end-start)/2;
        if(tableau[Middle] == SearchNumber){
            printf("Number Exist at Index %d",Middle);
            return 0;
        }else if(SearchNumber>tableau[Middle]){
            start = Middle +1;
        }else{
            end = Middle -1;
        }
    }

    printf("NUmber Not found -)");
    


    return 0;
}