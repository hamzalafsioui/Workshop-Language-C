#include <stdio.h>



// Le projet consiste à créer un programme en C qui permet de gérer le stock de livres dans une librairie. Le programme doit offrir les fonctionnalités suivantes :

// Ajouter un livre au stock.
// Afficher tous les livres disponibles.
// Rechercher un livre par son titre.
// Mettre à jour la quantité d'un livre.
// Supprimer un livre du stock.
// Afficher le nombre total de livres en stock.

int main() {
    
    int choix = 0;

    do
    {
        printf("\n=== Librairie Stock Management ===\n");
        printf("[1] Ajouter un livre au stock.\n");
        printf("[2] Afficher tous les livres disponibles. \n");
        printf("[3] Rechercher un livre par son titre.\n");
        printf("[4] Mettre à jour la quantité d'un livre.\n");
        printf("[5] Supprimer un livre du stock.\n");
        printf("[6] Afficher le nombre total de livres en stock.\n");
        printf("[7] EXit.\n");

        scanf(" %d ",&choix);
        switch (choix)
        {
        case 1:
        printf("choix 1");
            
            break;
        case 2:
        printf("choix 2");
        break;
         case 3:
        printf("choix 3");

        break;
         case 4:
        printf("choix 4");

        break;
         case 5:
        printf("choix 5");

        break;
         case 6:
        printf("choix 6");

        break;
         case 7:
        printf("Sortie du programme.\n");

        break;
         
        default:
        printf("Entree invalide. Veuillez reessayer.\n");

            break;
        }




    } while (choix != 7);
    



    return 0;
}
