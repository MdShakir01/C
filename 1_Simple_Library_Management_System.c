#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// This is a blueprint for storing book information.
struct Book {
    int id;
    char title[100];
    char author[100];
};

// Function declarations (prototypes)
void addBook();
void listBooks();
void searchBook();

int main() {
    int choice;

    // This loop creates the main menu and runs forever until the user exits.
    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add New Book\n");
        printf("2. List All Books\n");
        printf("3. Search for a Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // This consumes the leftover newline character from scanf

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                listBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                exit(0); // This command terminates the program.
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

// Function to add a book to the file
void addBook() {
    struct Book newBook;
    FILE *fp; // FILE is a special type for handling files. fp is a "file pointer".

    // Open the file in "append binary" mode.
    // 'a' means append (add to the end).
    // 'b' means binary mode, which is good for writing structs.
    fp = fopen("library.dat", "ab");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }

    printf("\nEnter Book ID: ");
    scanf("%d", &newBook.id);
    getchar(); // Consume the newline

    printf("Enter Book Title: ");
    fgets(newBook.title, sizeof(newBook.title), stdin);
    newBook.title[strcspn(newBook.title, "\n")] = 0; // Remove trailing newline

    printf("Enter Book Author: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    newBook.author[strcspn(newBook.author, "\n")] = 0; // Remove trailing newline

    // Write the entire struct to the file.
    fwrite(&newBook, sizeof(struct Book), 1, fp);

    fclose(fp); // Always close the file when you're done.
    printf("Book added successfully!\n");
}

// Function to read all books from the file and display them
void listBooks() {
    struct Book currentBook;
    FILE *fp;

    // Open the file in "read binary" mode.
    fp = fopen("library.dat", "rb");
    if (fp == NULL) {
        printf("No books in the library yet.\n");
        return;
    }

    printf("\n--- List of All Books ---\n");
    // Read one book (struct) at a time from the file until we reach the end.
    while (fread(&currentBook, sizeof(struct Book), 1, fp) == 1) {
        printf("ID: %d, Title: %s, Author: %s\n", currentBook.id, currentBook.title, currentBook.author);
    }

    fclose(fp);
}

// Function to search for a specific book by its ID
void searchBook() {
    int searchId, found = 0;
    struct Book currentBook;
    FILE *fp;

    printf("\nEnter Book ID to search for: ");
    scanf("%d", &searchId);
    getchar(); // Consume the newline

    fp = fopen("library.dat", "rb");
    if (fp == NULL) {
        printf("No books in the library yet.\n");
        return;
    }

    // Read through the file book by book
    while (fread(&currentBook, sizeof(struct Book), 1, fp) == 1) {
        if (currentBook.id == searchId) {
            printf("\n--- Book Found! ---\n");
            printf("ID: %d, Title: %s, Author: %s\n", currentBook.id, currentBook.title, currentBook.author);
            found = 1;
            break; // Exit the loop since we found the book
        }
    }

    if (!found) {
        printf("Book with ID %d not found.\n", searchId);
    }

    fclose(fp);
}