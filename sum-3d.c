#include <stdio.h>
int main()
{
    int n, hundreds, tens, ones, sum;
    printf("Enter a three-digit number: ");
    scanf("%d", &n);
    hundreds = n / 100;
    tens = (n / 10) % 10;
    ones = n % 10;
    sum = hundreds + tens + ones;
    printf("Sum of digits = %d\n", sum);
    return 0;
}