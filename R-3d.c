#include <stdio.h>
int main()
    {
    int n, hundreds, tens, ones, reverse;
    printf("Enter a three-digit number: ");
    scanf("%d", &n);
    hundreds = n / 100;
    tens = (n / 10) % 10;
    ones = n % 10;
    reverse = ones * 100 + tens * 10 + hundreds;
    printf("Reverse = %d\n", reverse);
    return 0;
}