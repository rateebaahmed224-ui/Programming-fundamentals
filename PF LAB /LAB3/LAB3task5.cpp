//TAX  CALCULATOR
#include <stdio.h>
int main()
{
	int salary,taxRate,afterTax;
    float tax;
    printf("Tax Calculator\n");
    printf("Enter the salary:");
    scanf("%d",&salary);
    
    printf("Enter the Tax rate:");
    scanf("%d",&taxRate);
    
    tax = (salary*taxRate)/100;
    printf("Your Tax is %.2f",tax);
    afterTax = salary-tax;
    printf("\nAfter tax your salary is %d",afterTax);
    
    return 0;

}