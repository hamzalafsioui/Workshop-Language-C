#include<stdio.h>

int main (){

    float prix;
    float prixTotal = 0;
    float discount = 0;
    int numberOfProduct = 0;

    printf("How Much product do you want to calculate: ");
    scanf("%d",&numberOfProduct);

    float productList[numberOfProduct];

    for (int i = 0; i < numberOfProduct; i++)
    {
        printf("\nenter prix de product %d:\n",i+1);
        scanf("%f",&prix);

        productList[i] = prix;

    }
    for (int i = 0; i < numberOfProduct; i++)
    {
         discount = (productList[i] * (i * 2) / 100);
        float prixAvecDiscount = productList[i] - discount;
        
        prixTotal += prixAvecDiscount;
        
    }
    printf("Final Total Prix: %.2f\n", prixTotal);
    
    


    



    return 0;
}

