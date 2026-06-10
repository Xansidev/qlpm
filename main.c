#include <stdio.h>

int main() {
    char choice;

    printf("you love linux right? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        printf("Awesome! Welcome to the penguin team.\n");
    } else if (choice == 'n' || choice == 'N') {
        printf("That's a shame! Maybe the terminal will win you over eventually.\n");
    } else {
        printf("Invalid choice! Please run the program again and type 'y' or 'n'.\n");
    }

    return 0;
}
