#include <stdio.h>

#define MAXBOOKS 100
typedef struct {
    char title[50];
    char author[50];
    int quantity;
} Book;

Book stock[MAXBOOKS];
int bookCount = 0;


void addBook();
 void  displayBooks();
void searchBook();
void searchBook();
void updateQuantity();
void deleteBook();
void totalBooks();

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

        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
        addBook();
            
            break;
        case 2:
        displayBooks();
        break;
         case 3:
        searchBook();

        break;
         case 4:
        updateQuantity();

        break;
         case 5:
        deleteBook();

        break;
         case 6:
        totalBooks();

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


void addBook(){

    if(bookCount >= MAXBOOKS){
        printf("\nStock is Full !!!");
        return;
    }
    

}

void displayBooks(){


}

void searchBook(){


}

void updateQuantity(){


}
void deleteBook(){

}





void totalBooks(){



}