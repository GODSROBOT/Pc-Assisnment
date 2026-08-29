#include <stdio.h>
void main() {
    printf("Intrest Calculator \n");
    int principal, rate, time, simple_intrest;
    printf("Enter the principal amount : ");
    scanf("%d", &principal);
    printf("Enter the rate of intrest : ");
    scanf("%d", &rate);
    printf("Enter the time in years : ");
    scanf("%d", &time);
    simple_intrest = (principal * rate * time) / 100;
    printf("Simple Interest : %d", simple_intrest);
}