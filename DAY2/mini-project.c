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
        printf("\nLe stock est plein !!!\n");
        return;
    }

    printf("Entrez le titre du livre :");
    getchar(); // remove trailing newline
    fgets(titles[bookCount], MAX_TITLE_LENGTH, stdin);
    titles[bookCount][strcspn(titles[bookCount], "\n")] = 0; // remove newline

    printf("Entrez le nom de l'auteur :");
    fgets(authors[bookCount], MAX_AUTHOR_LENGTH, stdin);
    authors[bookCount][strcspn(authors[bookCount], "\n")] = 0; // remove newline

    printf("Entrez le prix :");
    scanf("%f", &prices[bookCount]);

    printf("Entrez la quantité :");
    scanf("%d", &quantities[bookCount]);

    bookCount++;
    printf("Livre ajouté avec succès.\n");
}

void displayBooks() {
    if (bookCount == 0) {
        printf("Aucun livre trouvé (-\n");
        return;
    }

    for (int i = 0; i < bookCount; i++) {
        printf("Livre [%d]:\n", i + 1);
        printf("  Titre: %s\n", titles[i]);
        printf("  Auteur: %s\n", authors[i]);
        printf("  Prix: %.2f\n", prices[i]);
        printf("  Quantité: %d\n", quantities[i]);
    }
}

void searchBook() {
    if (bookCount == 0) {
        printf("Aucun livre n'existe pour le rechercher -)\n");
        return;
    }

    char searchTitle[MAX_TITLE_LENGTH];
    printf("Veuillez entrer le titre du livre pour le rechercher :");
    getchar();
    fgets(searchTitle, MAX_TITLE_LENGTH, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0; // remove newline

    for (int i = 0; i < bookCount; i++) {
        if (strcasecmp(titles[i], searchTitle) == 0) {
            printf("Livre [%d]:\n", i + 1);
            printf("  Titre: %s\n", titles[i]);
            printf("  Auteur: %s\n", authors[i]);
            printf("  Prix: %.2f\n", prices[i]);
            printf("  Quantité: %d\n", quantities[i]);
            return;
        }
    }
    printf("Aucun livre n'existe pour le rechercher -)\n");
}

void updateQuantity() {
    if (bookCount == 0) {
        printf("Aucun livre disponible à mettre à jour.\n");
        return;
    }

    char searchTitle[MAX_TITLE_LENGTH];
    printf("Entrez le titre du livre à mettre à jour :");
    getchar();
    fgets(searchTitle, MAX_TITLE_LENGTH, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0; // remove newline

    for (int i = 0; i < bookCount; i++) {
        if (strcasecmp(titles[i], searchTitle) == 0) {
            printf("Quantité actuelle :%d\n", quantities[i]);
            printf("Entrez la nouvelle quantité :");
            scanf("%d", &quantities[i]);
            printf("Quantité mise à jour.\n");
            return;
        }
    }
    printf("Livre non trouvé.\n");
}

void deleteBook() {
    if (bookCount == 0) {
        printf("Aucun livre disponible à supprimer.\n");
        return;
    }

    char searchTitle[MAX_TITLE_LENGTH];
    printf("Entrez le titre du livre à supprimer :");
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
            printf("Livre supprimé avec succès.\n");
            return;
        }
    }
    printf("Aucun livre trouvé avec le titre %s.\n", searchTitle);

}

void totalBooks() {
    int total = 0;
    for (int i = 0; i < bookCount; i++) {
        total += quantities[i];
    }
    printf("Nombre total de livres en stock : %d\n", total);

}
