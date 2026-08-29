#include <stdio.h>
int main() {
    printf("Salary calculator \n");
    int basic_salary, hra, da, gross_salary;
    printf("Enter the basic salary : ");
    scanf("%d", &basic_salary);
    hra = basic_salary * 0.2;
    da = basic_salary * 0.4;
    printf("The HRA is : %d\n", hra);
    printf("The DA is : %d\n", da);
    gross_salary = basic_salary + hra + da;
    printf("Gross salary : %d\n", gross_salary);
    return 0;
}