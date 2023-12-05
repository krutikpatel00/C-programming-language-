#include <stdio.h>

int main()
{
       float baseSalary, hraPercentage, daPercentage, taPercentage;
    float hra, da, ta, grossSalary;

   
    printf("Enter the base salary: ");
    scanf("%f", &baseSalary);
    printf("Enter the HRA percentage: ");
    scanf("%f", &hraPercentage);
    printf("Enter the DA percentage: ");
    scanf("%f", &daPercentage);
    printf("Enter the TA percentage: ");
    scanf("%f", &taPercentage);


    hra = (hraPercentage / 100) * baseSalary;
    da = (daPercentage / 100) * baseSalary;
    ta = (taPercentage / 100) * baseSalary;
    grossSalary = baseSalary + hra + da + ta;

    
    printf("Gross Salary: %.2f\n", grossSalary);

      return 0;
}
