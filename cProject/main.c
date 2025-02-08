#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MX_LEN 100
#define FILENAME "books.txt"

struct book {
    int id;
    char title[MX_LEN];
    char author[MX_LEN];
    int isIssued;
};

void addbook() {
    FILE *file = fopen(FILENAME, "a");
    if (!file) {
        printf("Error: Unable to open file.\n");
        return;
    }
    struct book b;
    printf("Enter book id: ");
    scanf("%d", &b.id);
    getchar(); 
    printf("Enter book title: ");
    scanf("%[^\n]%*c", b.title);
    printf("Enter book author: ");
    scanf("%[^\n]%*c", b.author);
    b.isIssued = 0;
    fprintf(file, "%d %s %s %d\n", b.id, b.title, b.author, b.isIssued);
    fclose(file);
    printf("Book added successfully.\n");
}

void display() {
    FILE *file = fopen(FILENAME, "r");
    if (!file) {
        printf("Error: Unable to open file.\n");
        return;
    }
    struct book b;
    printf("------------------------------------\n");
    printf("ID\tTitle\tAuthor\tIssued\n");
    while (fscanf(file, "%d %99s %99s %d", &b.id, b.title, b.author, &b.isIssued) != EOF) {
        printf("%d\t%s\t%s\t%d\n", b.id, b.title, b.author, b.isIssued);
    }
    printf("------------------------------------\n");
    fclose(file);
}

void search() {
    FILE *file = fopen(FILENAME, "r");
    if (!file) {
        printf("Error: Unable to open file.\n");
        return;
    }
    struct book b;
    int id;
    printf("Enter book id: ");
    scanf("%d", &id);
    while (fscanf(file, "%d %99s %99s %d", &b.id, b.title, b.author, &b.isIssued) != EOF) {
        if (b.id == id) {
            printf("ID\tTitle\tAuthor\tIssued\n");
            printf("%d\t%s\t%s\t%d\n", b.id, b.title, b.author, b.isIssued);
            fclose(file);
            return;
        }
    }
    printf("Book not found.\n");
    fclose(file);
}


void delete() {
    FILE *file = fopen(FILENAME, "r");
    if (!file) {
        printf("Error: File not found.\n");
        return;
    }
    FILE *temp = fopen("temp.txt", "w");
    if (!temp) {
        printf("Error: Unable to open temp file.\n");
        fclose(file);
        return;
    }
    struct book b;
    int id, found = 0;
    printf("Enter book id to delete: ");
    scanf("%d", &id);

    while (fscanf(file, "%d %99s %99s %d", &b.id, b.title, b.author, &b.isIssued) != EOF) {
        if (b.id != id) {
            fprintf(temp, "%d %s %s %d\n", b.id, b.title, b.author, b.isIssued);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(temp);
    remove(FILENAME);
    rename("temp.txt", FILENAME);
    if (found) {
        printf("Book deleted successfully.\n");
    } else {
        printf("Book not found.\n");
    }
}



void issue() {
    FILE *file = fopen(FILENAME, "r");
    if (!file) {
        printf("Error: Unable to open file.\n");
        return;
    }
    int id;
    printf("Enter book id: ");
    scanf("%d", &id);
    struct book b;
    FILE *temp = fopen("temp.txt", "w");
    if (!temp) {
        printf("Error: Unable to open file.\n");
        fclose(file);
        return;
    }
    int found = 0;
    while (fscanf(file, "%d %99s %99s %d", &b.id, b.title, b.author, &b.isIssued) != EOF) {
        if (b.id == id) {
            found = 1;
            b.isIssued = !b.isIssued;
        }
        fprintf(temp, "%d %s %s %d\n", b.id, b.title, b.author, b.isIssued);
    }
    fclose(file);
    fclose(temp);
    remove(FILENAME);
    rename("temp.txt", FILENAME);
    if (found) {
        printf("Book issue/return status updated successfully.\n");
    } else {
        printf("Book not found.\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("1. Add book\n");
        printf("2. Display books\n");
        printf("3. Search book\n");
        printf("4. Delete book\n");
        printf("5. Issue/Return book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            addbook();
        } else if (choice == 2) {
            display();
        } else if (choice == 3) {
            search();
        } else if (choice == 4) {
            delete();
        } else if (choice == 5) {
            issue();
        } else if (choice == 6) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}