#include <stdio.h>
int main() {
    int a, b;
    printf("Arithmetic Calculator \n");
    printf("Enter a number 1 : ");
    scanf("%d", &a); // Clear the input buffer
    printf("Enter a number 2 : ");
    scanf("%d", &b); // Clear the input buffer
    int sum = a + b;
    int diffrence = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;
    printf("Sum : %d\n", sum);
    printf("Diffrence : %d\n", diffrence);
    printf("Product : %d\n", product);
    printf("Quotient : %d\n", quotient);
    printf("Remainder : %d\n", remainder);
return 0;
}