
#include <stdio.h>
#include <string.h>

// Supplier variables
char supplierName[100] = "";
char email[100] = "";
char phone[20] = "";
char town[50] = "";
char backup[100] = "";
int supplierAdded = 0;

// LAB TASK 1: Basic Supplier Details
void addSupplier() {
    printf("\n--- ADD SUPPLIER ---\n");

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);
    supplierName[strcspn(supplierName, "\n")] = '\0';

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    printf("Enter phone: ");
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);
    town[strcspn(town, "\n")] = '\0';

    strcpy(backup, supplierName);
    supplierAdded = 1;

    printf("\nSupplier added successfully!\n");
}

void displaySupplier() {
    if (supplierAdded == 0) {
        printf("\nNo supplier added yet.\n");
        return;
    }

    printf("\n--- SUPPLIER DETAILS ---\n");
    printf("Name  : %s\n", supplierName);
    printf("Email : %s\n", email);
    printf("Phone : %s\n", phone);
    printf("Town  : %s\n", town);
}

// LAB TASK 2: String Length
void showStringLengths() {
    if (supplierAdded == 0) {
        printf("\nNo supplier added yet.\n");
        return;
    }

    printf("\n--- STRING LENGTHS ---\n");
    printf("Supplier name length : %zu\n", strlen(supplierName));
    printf("Supplier email length: %zu\n", strlen(email));
    printf("Supplier phone length: %zu\n", strlen(phone));
    printf("Supplier town length : %zu\n", strlen(town));
}

// LAB TASK 3: Supplier Search
void searchSupplier() {
    char searchName[100];

    if (supplierAdded == 0) {
        printf("\nNo supplier available to search.\n");
        return;
    }

    printf("\n--- SUPPLIER SEARCH ---\n");
    printf("Enter supplier name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    if (strcmp(searchName, supplierName) == 0) {
        printf("Supplier found!\n");
        displaySupplier();
    } else {
        printf("Supplier not found.\n");
    }
}

// LAB TASK 4: Copy Supplier Information
void copySupplier() {
    if (supplierAdded == 0) {
        printf("\nNo supplier added yet.\n");
        return;
    }

    strcpy(backup, supplierName);

    printf("\n--- SUPPLIER BACKUP ---\n");
    printf("Original supplier: %s\n", supplierName);
    printf("Backup supplier  : %s\n", backup);
}

// LAB TASK 5: Construct Supplier Description
void supplierDescription() {
    char description[300];

    if (supplierAdded == 0) {
        printf("\nNo supplier added yet.\n");
        return;
    }

    strcpy(description, supplierName);
    strcat(description, " operates in ");
    strcat(description, town);
    strcat(description, ".");

    printf("\n--- SUPPLIER DESCRIPTION ---\n");
    printf("%s\n", description);
}

// LAB TASK 6: MFMS Supplier Management Menu
int main() {
    int choice;
    char input[20];

    do {
        printf("\n================================\n");
        printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
        printf("================================\n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        if (sscanf(input, "%d", &choice) != 1) {
            choice = 0;
        }

        switch (choice) {
            case 1:
                addSupplier();
                break;

            case 2:
                displaySupplier();
                showStringLengths();
                copySupplier();
                supplierDescription();
                break;

            case 3:
                searchSupplier();
                break;

            case 4:
                showStringLengths();
                break;

            case 5:
                printf("\nExiting Supplier Management System...\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
