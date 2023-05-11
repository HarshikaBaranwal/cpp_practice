#include <stdio.h>

int main() {
    int choice;
    
    do {
        printf("=== GAME MENU ===\n");
        printf("1. New Game\n");
        printf("2. Load Game\n");
        printf("3. Options\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Starting a new game...\n");
                // Call function to start new game
                break;
            case 2:
                printf("Loading a saved game...\n");
                // Call function to load saved game
                break;
            case 3:
                printf("Options menu...\n");
                // Call function to display options menu
                break;
            case 4:
                printf("Exiting the game...\n");
                // Call function to exit game
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        
        printf("\n");
    } while(choice != 4);
    
    return 0;
}
