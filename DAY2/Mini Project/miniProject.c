#include <stdio.h>

#define MAXBOOKS 100
#define MAX_TITLE_LENGTH 50
#define MAX_AUTHOR_LENGTH 50

typedef struct {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int quantity;
} Book;

Book stock[MAXBOOKS];
int bookCount = 0;


void addBook();
void displayBooks();
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

    system("clear");

    if(bookCount >= MAXBOOKS){
        printf("\nStock is Full !!!");
        return;
    }
 printf("Enter book title: ");
    getchar(); // Program still waiting in the input buffer "\n"  we remove it by getchar -)
    fgets(stock[bookCount].title,sizeof(stock->title), stdin);
    stock[bookCount].title[strcspn(stock[bookCount].title, "\n")] = 0; // remove newline by using strcspn

    printf("Enter author name: ");
    fgets(stock[bookCount].author,sizeof(stock->author), stdin);
    stock[bookCount].author[strcspn(stock[bookCount].author, "\n")] = 0;  // Remove newline by using strcspn

    printf("Enter quantity: ");
    scanf("%d", &stock[bookCount].quantity);

    bookCount++;
    printf("Book added successfully.\n");

}

void displayBooks(){

    system("clear");
    if(bookCount == 0){
        printf("No Books Found (-\n");
        return;
    }

    for(int i=0 ; i< bookCount ;i++){
        printf("Book [%d]:\n", i+1);
        printf("  Title: %s\n", stock[i].title);
        printf("  Author: %s\n", stock[i].author);
        printf("  Quantity: %d\n", stock[i].quantity);
    }

    
    
    

}

void searchBook(){

    if(bookCount == 0){
        printf("No Book Exist to search for it -)");
        return;
    }

    char searchTitle [MAX_TITLE_LENGTH];
    printf("PLease enter book Title to search for it:");
    getchar();
    fgets(searchTitle,sizeof(stock->title),stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0;  // Remove newline
    for(int i=0;i<bookCount;i++){
        if(strcasecmp(stock[i].title,searchTitle)==0){
             printf("Book [%d]:\n", i+1);
        printf("  Title: %s\n", stock[i].title);
        printf("  Author: %s\n", stock[i].author);
        printf("  Quantity: %d\n", stock[i].quantity);
        break;
        }
    }


}

void updateQuantity(){


}
void deleteBook(){

}





void totalBooks(){
 int total = 0;
    for (int i = 0; i < bookCount; i++) {
        total += stock[i].quantity;
    }
    printf("Total number of books in stock: %d\n", total);


}



// building my Own Functions 


