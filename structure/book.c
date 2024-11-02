#include <stdio.h>
#include <stdlib.h> // For malloc() and free()
#include <string.h> // For strcspn()

// Defining a structure for a book
struct Book {
    int id;
    char title[100];
    char author[50];
};

int main() {
    // Dynamically allocating memory for a structure
    struct Book *bookPtr = (struct Book *)malloc(sizeof(struct Book));
    if (bookPtr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with an error code
    }

    // Accepting user input for the book details
    printf("Enter Book ID: ");
    scanf("%d", &bookPtr->id);
    getchar(); // Consume newline left by scanf

    printf("Enter Book Title: ");
    fgets(bookPtr->title, sizeof(bookPtr->title), stdin);
    bookPtr->title[strcspn(bookPtr->title, "\n")] = '\0'; // Remove newline character

    printf("Enter Book Author: ");
    fgets(bookPtr->author, sizeof(bookPtr->author), stdin);
    bookPtr->author[strcspn(bookPtr->author, "\n")] = '\0'; // Remove newline character

    // Printing the book details
    printf("\nBook Details:\n");
    printf("ID: %d\n", bookPtr->id);
    printf("Title: %s\n", bookPtr->title);
    printf("Author: %s\n", bookPtr->author);

    // Freeing the allocated memory
    free(bookPtr);

    return 0;
}
