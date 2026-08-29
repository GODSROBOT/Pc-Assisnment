#include <stdio.h>
void main() {
    printf("Last digit of a number \n");
    int number, last_digit;
    printf("Enter a number : ");
    scanf("%d", &number);
    last_digit = number % 10;
    printf("The last digit of the number is : %d", last_digit);
}