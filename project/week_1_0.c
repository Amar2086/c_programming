#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char phone[15];
    char email[50];
} Contact;

Contact *addContact(Contact *contacts, int *size);
Contact *deleteContact(Contact *contacts, int *size, int index);
void displayContacts(Contact *contacts, int size);

int main() {
    Contact *contacts = NULL;
    int size = 0;
    int choice;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. Display Contacts\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                contacts = addContact(contacts, &size);
                break;
            case 2: {
                int index;
                printf("Enter index to delete: ");
                scanf("%d", &index);
                contacts = deleteContact(contacts, &size, index);
                break;
            }
            case 3:
                displayContacts(contacts, size);
                break;
            case 4:
                free(contacts);
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

Contact *addContact(Contact *contacts, int *size) {
    *size += 1;
    contacts = realloc(contacts, (*size) * sizeof(Contact));

    if (contacts == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    printf("Enter name: ");
    scanf("%s", contacts[*size - 1].name);
    printf("Enter phone: ");
    scanf("%s", contacts[*size - 1].phone);
    printf("Enter email: ");
    scanf("%s", contacts[*size - 1].email);

    return contacts;
}

Contact *deleteContact(Contact *contacts, int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index. No contact deleted.\n");
        return contacts;
    }

    for (int i = index; i < *size - 1; i++) {
        contacts[i] = contacts[i + 1];
    }

    *size -= 1;
    contacts = realloc(contacts, (*size) * sizeof(Contact));

    if (*size > 0 && contacts == NULL) {
        printf("Memory reallocation failed.\n");
        exit(1);
    }

    return contacts;
}

void displayContacts(Contact *contacts, int size) {
    if (size == 0) {
        printf("No contacts to display.\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        printf("Contact %d:\n", i + 1);
        printf("Name: %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
        printf("Email: %s\n", contacts[i].email);
    }
}
