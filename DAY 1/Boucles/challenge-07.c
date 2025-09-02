#include<stdio.h>


int main (){


    int number=0,remainder = 0,reverse = 0;
    printf("Enter NUmber: ");
    scanf("%d",&number);

    
    while (number !=0)
    {
        remainder = number %10;
        reverse = reverse *10 + remainder;
        number /= 10;
    }

    printf("Reverse: %d",reverse);
    
    

    return 0;
}