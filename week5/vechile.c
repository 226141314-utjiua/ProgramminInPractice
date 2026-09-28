#include <stdio.h>
#include <string.h>

int main() {
    char registrations[20][20];
    char search_target[20];
    int found = 0;

    printf("=== Municipal Information Management System ===\n");
    printf("--- Part C: Vehicle Registration Numbers ---\n\n");

    // 1. Capture 20 registration numbers
    for (int i = 0; i < 20; i++) {
        printf("Enter registration number for vehicle %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    // 2. Display all registration numbers
    printf("\n--- Captured Vehicle Registrations ---\n");
    for (int i = 0; i < 20; i++) {
        printf("Vehicle %2d: %s\n", i + 1, registrations[i]);
    }

    // 3. Search for a particular registration number
    printf("\n--- Search Vehicle Registration ---\n");
    printf("Enter registration number to search for: ");
    scanf("%19s", search_target);

    printf("\nSearch Results:\n");
    for (int i = 0; i < 20; i++) {
        // strcmp returns 0 when strings match completely
        if (strcmp(registrations[i], search_target) == 0) {
            printf(" -> Match found at Vehicle %d (Index %d)\n", i + 1, i);
            found = 1;
        }
    }

    if (!found) {
        printf(" -> Registration number '%s' was not found in records.\n", search_target);
    }

    return 0;
}