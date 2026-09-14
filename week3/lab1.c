#include <stdio.h>
int main() {
    float BasicSalary; 
    float Housing; 
    float Transport; 
    float Tax; 
    float GrossSalary; 
    float NetSalary; 

    printf("Please Enter basic salary: "); 
    scanf("%f", &BasicSalary); 

    printf("Please Enter Housing allowance: "); 
    scanf("%f", &Housing); 

    printf("Please Enter Transport allowance: "); 
    scanf("%f", &Transport); 

    printf("Please Enter Tax: "); 
    scanf("%f", &Tax); 

    GrossSalary = BasicSalary + Housing + Transport; 
    NetSalary = GrossSalary - Tax; 

    printf("\nGross Salary: %.2f\n", GrossSalary); 
    printf("Net Salary: %.2f\n", NetSalary);

    return 0;
} 