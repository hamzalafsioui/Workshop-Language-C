#include <stdio.h>

// Challenge 10 : Formatage de la Date
// Écrivez un programme C qui lit une date au format 15/09/2012 et l'affiche sous le format suivant : 15-Septembre-2012.



int main(){


    int day , month,year;
     printf("Entrez une date (jj/mm/aaaa) : ");
    scanf("%d/%d/%d", &day, &month, &year);
       
    
    switch (month) {
        case 1:  printf("%d-Janvier-%d",day,year); break;
        case 2:  printf("%d-Février-%d",day,year); break;
        case 3:  printf("%d-Mars-%d",day,year); break;
        case 4:  printf("%d-Avril-%d",day,year); break;
        case 5:  printf("%d-Mai-%d",day,year); break;
        case 6:  printf("%d-Juin-%d",day,year); break;
        case 7:  printf("%d-Juillet-%d",day,year); break;
        case 8:  printf("%d-Août-%d",day,year); break;
        case 9:  printf("%d-Septembre-%d",day,year); break;
        case 10: printf("%d-Octobre-%d",day,year); break;
        case 11: printf("%d-Novembre-%d",day,year); break;
        case 12: printf("%d-Décembre-%d",day,year); break;
        default:
            printf("les donnes invalide\n");
            return 1;
    }

    return 0;
}