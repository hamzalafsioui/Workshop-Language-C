#include<stdio.h>
#include<string.h>

#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 11
#define MAX_ADDRESS_LENGTH 50
typedef struct{
  char Name[MAX_NAME_LENGTH];
  char Telephone_Number[MAX_PHONE_LENGTH];
  char Address[MAX_ADDRESS_LENGTH];
}Contact;

Contact contacts[100];
int contactCount = 0;
void addContact(){
  Contact newContact;
  printf("Ajouter un Contact.\n");
  printf("Nom: ");
  getchar();
  fgets(newContact.Name, sizeof(newContact.Name), stdin);
  newContact.Name[strcspn(newContact.Name, "\n")] = '\0';
  do{
  printf("Telephone (10 chiffres): ");
  scanf(" %10s", newContact.Telephone_Number);
  
  }while (strlen(newContact.Telephone_Number) != 10);
  
      while (getchar() != '\n');

  

  printf("Adresse: ");
  fgets(newContact.Address, sizeof(newContact.Address), stdin);
  newContact.Address[strcspn(newContact.Address, "\n")] = '\0';

  contacts[contactCount] = newContact;
  contactCount++;
  printf("Contact Ajouter avec succes.\n");
}

void updateContact(){

}

void deleteContact(){

}

void displayContacts(){
    printf("\n======= Tous les Contacts =======\n");
  
  if(contactCount == 0){
    printf("aucun contacts \n");
    return;
  }

  for (int i = 0; i < contactCount; i++)
  {
      printf("[%d] Nom: %s | Phone: %s | Address: %s\n",
               i + 1,
               contacts[i].Name,
               contacts[i].Telephone_Number,
               contacts[i].Address);
  }
  
}

void searchContact(){

}


int main()
{

  int choix = 0;

  do
  {
    printf("\n=== Contact Stock Management ===\n");
    printf("[1] Ajouter un Contact.\n");
    printf("[2] Modifier un Contact. \n");
    printf("[3] Supprimer un Contact.\n");
    printf("[4] Afficher Tous les Contacts\n");
    printf("[5] Rechercher un Contact\n");
    printf("[6] EXit.\n");

    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
      addContact();

      break;
    case 2:
      updateContact();
      break;
    case 3:
      deleteContact();

      break;
    case 4:
      displayContacts();

      break;
    case 5:
      searchContact();

      break;
    case 6:
      printf("Sortie du programme.\n");

      break;

    default:
      printf("Entree invalide. Veuillez reessayer.\n");

      break;
    }

  } while (choix != 6);


  return 0;
}