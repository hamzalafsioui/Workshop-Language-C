#include<stdio.h>




// Challenge 13 : Affichage des valeurs binaire et hexadécimale équivalentes
// Écrivez un programme C pour afficher la valeur équivalente en binaire et en hexadécimal. Entrez un nombre entier et affichez ses valeurs équivalentes en binaire et en hexadécimal.

void decimalToHexadecimal(int n) {
    char hexDigits[] = "0123456789ABCDEF";
    
    
    char hex[20]; // Max 20 digits
    
    int i = 0;
    
    // Check if the number is 0
    if (n == 0) {
        printf("0");
        return;
    }

    
    while (n > 0) {
        hex[i] = hexDigits[n % 16]; // Store remainder
        n = n / 16; // last loop n will be 0 and forloop  stop here
        i++;
    }

    // Print reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
}



int main (){

    printf("\n\n\n");

    int numberEntier = 25;


    // decimal to binary
    int bitIndex = 31;
    while (bitIndex >=0)
    {
    
        printf("%d",numberEntier>>bitIndex & 1);
        bitIndex--;
        
    }

    printf("\n");

    // decimal to Hexa

decimalToHexadecimal(numberEntier);
    


    printf("\n\n\n");





    return 0;
}