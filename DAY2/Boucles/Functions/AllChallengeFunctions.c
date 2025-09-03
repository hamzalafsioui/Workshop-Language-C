#include<stdio.h>

int somme(int a,int b){
    return a + b;
}
int multiplication(int a, int b){
return a*b;
}

int Max(int a,int b){
    return a > b ? a : b;
}
int Min(int a,int b){
    return a<b ? a : b;
}

int factorial(int n){
    if(n==0 || n == 1)
        return 1;

    return n * factorial(n-1);
}

int fibonacci(int n){
    if(n<=0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);

        int a =0, b=1;
    

        // without recursion
    // int c = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     c = a + b;
    //     printf(" %d",c);
    //     a = b;
    //     b = c;
        
    // }
    // return c;
}

char InverseChaine(char *chaine){

    // length
    int length = strlen(chaine);
    char temp;

    chaine[strcspn(chaine,"\n")] = 0;


    for (int i = 0; i < length/2; i++)
    {
        temp = chaine[i];
        chaine[i] = chaine[length-i-1];
        chaine[length-i-1] = temp;
    }
    
}

int IsPaire(int n){
    return (n%2==0) ? 1: 0;

}



int main(){









    char name[] = "hamza";
    InverseChaine(name);
    printf("%s\n",name);

    printf("%d",IsPaire(10));








    return 0;
}