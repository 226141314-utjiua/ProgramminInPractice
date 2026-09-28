#include <stdio.h>

#define DEPARTMENTS 10

int main() {
    float budgets[DEPARTMENTS];
    float total = 0.0, average;
    float temp; // Temporary variable for sorting

    printf("=== Municipal Information Management System ===\n");
    printf("--- Part B: Department Budgets ---\n\n");

    // 1. Capture 10 department budgets
    for (int i = 0; i < DEPARTMENTS; i++) {
        printf("Enter budget for Department %d: $", i + 1);
        scanf("%f", &budgets[i]);
        total += budgets[i]; // Accumulate total budget
    }

    // 2. Display initial budgets
    printf("\nCaptured Department Budgets:\n");
    for (int i = 0; i < DEPARTMENTS; i++) {
        printf("  Department %2d: $%.2f\n", i + 1, budgets[i]);
    }

    // 3 & 4. Calculate total and average
    average = total / DEPARTMENTS;

    printf("\n--- Budget Summary ---\n");
    printf("Total Municipal Budget  : $%.2f\n", total);
    printf("Average Department Budget: $%.2f\n", average);

    // 5. Sort budgets from lowest to highest (Bubble Sort)
    for (int i = 0; i < DEPARTMENTS - 1; i++) {
        for (int j = 0; j < DEPARTMENTS - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
                // Swap elements
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    // Display sorted budgets
    printf("\n--- Budgets Sorted (Lowest to Highest) ---\n");
    for (int i = 0; i < DEPARTMENTS; i++) {
        printf("  Position %2d: $%.2f\n", i + 1, budgets[i]);
    }

    return 0;
}