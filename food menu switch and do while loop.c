#include <stdio.h>

int main() {
    int choice;

    do {

        printf("1. Burger - 150 Tk\n");
        printf("2. Pizza - 300 Tk\n");
        printf("3. Coffee - 100 Tk\n");
        printf("4. Exit\n");

        printf("Choose item: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Burger: 150 Tk\n");
                break;
            case 2:
                printf("Pizza: 300 Tk\n");
                break;
            case 3:
                printf("Coffee: 100 Tk\n");
                break;
            case 4:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}
