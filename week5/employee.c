#include <stdio.h>

int main() {
    float salaries[50];
    float sum = 0.0, average;
    float highest, lowest, search_salary;
    int found = 0;

    // 1. Capture 50 salaries
    printf("--- Enter Salaries for 50 Employees ---\n");
    for (int i = 0; i < 50; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    // 2. Display all salaries
    printf("\n--- All Employee Salaries ---\n");
    for (int i = 0; i < 50; i++) {
        printf("Employee %d: $%.2f\n", i + 1, salaries[i]);
    }

    // Initialize variables using the first employee's salary
    highest = salaries[0];
    lowest = salaries[0];
    sum = salaries[0];

    // 3, 4, & 5. Calculate Average, Highest, and Lowest
    for (int i = 1; i < 50; i++) {
        sum += salaries[i];

        if (salaries[i] > highest) {
            highest = salaries[i];
        }
        if (salaries[i] < lowest) {
            lowest = salaries[i];
        }
    }

    average = sum / 50.0;

    printf("\n--- Salary Results ---\n");
    printf("Average Salary: $%.2f\n", average);
    printf("Highest Salary: $%.2f\n", highest);
    printf("Lowest Salary : $%.2f\n", lowest);

    // 6. Search for a particular salary
    printf("\nEnter a salary to search for: ");
    scanf("%f", &search_salary);

    printf("\n--- Search Results ---\n");
    for (int i = 0; i < 50; i++) {
        if (salaries[i] == search_salary) {
            printf("Found salary $%.2f at Employee %d (Index %d)\n", search_salary, i + 1, i);
            found = 1;
        }
    }

    if (!found) {
        printf("Salary $%.2f was not found in the records.\n", search_salary);
    }

    return 0;
}