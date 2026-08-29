#include <stdio.h>
int main()
{
    int n, tens, ones, sum;
    printf("Enter a two-digit number: ");
    scanf("%d", &n);
    tens = n / 10;
    ones = n % 10;
    sum = tens + ones;
    printf("Sum of digits = %d\n", sum);
    return 0;
}