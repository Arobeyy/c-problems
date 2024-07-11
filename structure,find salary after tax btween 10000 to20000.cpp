#include <stdio.h>
#define SIZE 3
struct Info
{
    char name[20];
    double grossSalary;
    int taxRate;
    float tax;
    double salaryAfterTax;
};

void calulateTaxAndPrint(struct Info employees[])
{
    printf("\n\nemployee whose salary is between 10000 to 70000 after tax:\n ");
    for (int i = 0; i < SIZE; i++)
    {
        employees[i].tax = (employees[i].grossSalary * employees[i].taxRate) / 100;
        employees[i].salaryAfterTax = employees[i].grossSalary - employees[i].tax;

        if(employees[i].salaryAfterTax >= 10000 && employees[i].salaryAfterTax <= 70000)
            printf("name: %s\ngross Salary: %.2lf\ntax Rate: %d\ntax: %.2f\nsalary after tax: %.2lf\n",employees[i].name, employees[i].grossSalary, employees[i].taxRate, employees[i].tax, employees[i].salaryAfterTax  );
    }
}


int main()
{
    struct Info employees[30];

    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter information of employee no %d:\n", i+1);
        printf("name:");
        scanf(" %s", employees[i].name);
        printf("gross salary:");
        scanf(" %lf", &employees[i].grossSalary);
        printf("tax rate: ");
        scanf(" %d", &employees[i].taxRate);

    }

    calulateTaxAndPrint(employees);





    return 0;
}
