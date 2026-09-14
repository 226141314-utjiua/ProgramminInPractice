     #include <stdio.h>

int main() {
    //variable declaration
    char supplierName[50];
    double supplierPrice;
    double budget;
    int registrationStatus;
    int documentsComplete;

    // Read single-word supplier name to avoid input buffer issues
    printf("Please Enter Supplier Name: ");
    scanf("%s", supplierName);

    printf("Please Enter Supplier Price: ");
    scanf("%lf", &supplierPrice);

    printf("Please Enter Available Budget: ");
    scanf("%lf", &budget);

    printf("Valid Registration (1=Yes, 0=No): ");
    scanf("%d", &registrationStatus);

    printf("Documents Complete (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete);

    // Decision Logic
    int isQualified = (registrationStatus == 1) &&
                      (documentsComplete == 1) &&
                      (supplierPrice <= budget);

    // Output Results
    printf("\n--- EVALUATION RESULT ---\n");
    printf("Supplier: %s\n", supplierName);
    printf("Price   : $%.2f\n", supplierPrice);
    printf("Budget  : $%.2f\n", budget);

    if (isQualified) {
        printf("Status  : QUALIFIED\n");
        printf("Result  : PREFERRED SUPPLIER\n");
    } else {
        printf("Status  : DISQUALIFIED\n");
        printf("Result  : NOT ELIGIBLE\n");
    }

    return 0;
}