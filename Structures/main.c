#include <stdio.h>
#include <string.h>

// Define the Books structure
struct Books {
    char name[50];
    char author[50];
    int price;
};

// Function to print the structure
void printStruct(struct Books bk) {
    printf("%s book by %s costs %d\n", bk.name, bk.author, bk.price);
}

int main() {
    // Declare struct variables
    struct Books bk1, bk2;

    // Initialize bk1
    strcpy(bk1.name, "C programming");
    strcpy(bk1.author, "Dennis Ritchie");
    bk1.price = 70;

    // Print bk1
    printStruct(bk1);

    return 0;
}
