#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXBOOKS 100
#define MAX_TITLE_LENGTH 50
#define MAX_AUTHOR_LENGTH 50

char titles[MAXBOOKS][MAX_TITLE_LENGTH];
char authors[MAXBOOKS][MAX_AUTHOR_LENGTH];
int quantities[MAXBOOKS];
float prices[MAXBOOKS];
int bookCount = 0;

void addBook();
void displayBooks();
void searchBook();
void updateQuantity();
void deleteBook();
void totalBooks();



int main() {
    int choix = 0;

    do {
        printf("\n=== Librairie Stock Management ===\n");
        printf("[1] Ajouter un livre au stock.\n");
        printf("[2] Afficher tous les livres disponibles.\n");
        printf("[3] Rechercher un livre par son titre.\n");
        printf("[4] Mettre à jour la quantité d'un livre.\n");
        printf("[5] Supprimer un livre du stock.\n");
        printf("[6] Afficher le nombre total de livres en stock.\n");
        printf("[7] Quitter.\n");

        printf("Choix: ");
        scanf("%d", &choix);

        switch (choix) {
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
                printf("Entrée invalide. Veuillez réessayer.\n");
        }
    } while (choix != 7);

    return 0;
}

void addBook() {
    if (bookCount >= MAXBOOKS) {
        printf("\nStock is Full !!!\n");
        return;
    }

    printf("Enter book title: ");
    getchar(); // remove trailing newline
    fgets(titles[bookCount], MAX_TITLE_LENGTH, stdin);
    titles[bookCount][strcspn(titles[bookCount], "\n")] = 0; // remove newline

    printf("Enter author name: ");
    fgets(authors[bookCount], MAX_AUTHOR_LENGTH, stdin);
    authors[bookCount][strcspn(authors[bookCount], "\n")] = 0; // remove newline

    printf("Enter price: ");
    scanf("%f", &prices[bookCount]);

    printf("Enter quantity: ");
    scanf("%d", &quantities[bookCount]);

    bookCount++;
    printf("Book added successfully.\n");
}

void displayBooks() {
    if (bookCount == 0) {
        printf("No Books Found (-\n");
        return;
    }

    for (int i = 0; i < bookCount; i++) {
        printf("Book [%d]:\n", i + 1);
        printf("  Title: %s\n", titles[i]);
        printf("  Author: %s\n", authors[i]);
        printf("  Price: %.2f\n", prices[i]);
        printf("  Quantity: %d\n", quantities[i]);
    }
}

void searchBook() {
    if (bookCount == 0) {
        printf("No Book Exist to search for it -)\n");
        return;
    }

    char searchTitle[MAX_TITLE_LENGTH];
    printf("Please enter book Title to search for it: ");
    getchar();
    fgets(searchTitle, MAX_TITLE_LENGTH, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0; // remove newline

    for (int i = 0; i < bookCount; i++) {
        if (strcasecmp_custom(titles[i], searchTitle) == 0) {
            printf("Book [%d]:\n", i + 1);
            printf("  Title: %s\n", titles[i]);
            printf("  Author: %s\n", authors[i]);
            printf("  Price: %.2f\n", prices[i]);
            printf("  Quantity: %d\n", quantities[i]);
            return;
        }
    }
    printf("Book not found.\n");
}

void updateQuantity() {
    if (bookCount == 0) {
        printf("No books available to update.\n");
        return;
    }

    char searchTitle[MAX_TITLE_LENGTH];
    printf("Enter the title of the book to update: ");
    getchar();
    fgets(searchTitle, MAX_TITLE_LENGTH, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0; // remove newline

    for (int i = 0; i < bookCount; i++) {
        if (strcasecmp(titles[i], searchTitle) == 0) {
            printf("Current quantity: %d\n", quantities[i]);
            printf("Enter new quantity: ");
            scanf("%d", &quantities[i]);
            printf("Quantity updated.\n");
            return;
        }
    }
    printf("Book not found.\n");
}

void deleteBook() {
    if (bookCount == 0) {
        printf("No books available to delete.\n");
        return;
    }

    char searchTitle[MAX_TITLE_LENGTH];
    printf("Enter the title of the book to delete: ");
    getchar();
    fgets(searchTitle, MAX_TITLE_LENGTH, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0; // remove newline

    for (int i = 0; i < bookCount; i++) {
        if (strcasecmp(titles[i], searchTitle) == 0) {
            // Shift all subsequent books up
            for (int j = i; j < bookCount - 1; j++) {
                strcpy(titles[j], titles[j + 1]);
                strcpy(authors[j], authors[j + 1]);
                prices[j] = prices[j + 1];
                quantities[j] = quantities[j + 1];
            }
            bookCount--;
            printf("Book deleted successfully.\n");
            return;
        }
    }
    printf("No book found with title \"%s\".\n", searchTitle);
}

void totalBooks() {
    int total = 0;
    for (int i = 0; i < bookCount; i++) {
        total += quantities[i];
    }
    printf("Total number of books in stock: %d\n", total);
}
