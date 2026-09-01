#include <stdio.h>
int main() {
double Revenue; 
double Expenses; 
double Balance; 
printf("MUNICIPAL BUDGET CALCULATOR\n"); 
printf("---------------------------\n"); 
printf(" Please Enter total Revenue: "); 
scanf("%lf", &Revenue); 
printf(" Please Enter total Expenses: "); 
scanf("%lf", &Expenses); 
Balance = Revenue - Expenses; 
printf("\nRevenue: %.2f\n", Revenue); 
printf("Expenses: %.2f\n", Expenses); 
if (Balance > 0) { 
printf("Surplus: %.2f\n", Balance); 
} 
else if (Balance < 0) { 
printf("Deficit: %.2f\n", -Balance); 
} 
else { 
printf("The budget is balanced.\n"); 
} 
    return 0;
}
