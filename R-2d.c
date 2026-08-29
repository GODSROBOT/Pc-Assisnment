#include <stdio.h>

int main()
{
    int n, tens, ones, reverse;
    printf("Enter a two-digit number: ");
    scanf("%d", &n);
    tens = n / 10;
    ones = n % 10;
    reverse = ones * 10 + tens;
    printf("Reverse = %d\n", reverse);
    return 0;
}