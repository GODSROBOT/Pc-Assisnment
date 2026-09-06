#include <stdio.h>
int main () {
    int amount;
    printf("Enter The amount: ");
    scanf("%d", &amount);
    if(amount>=50000) {
        printf("Alert! You are withdrawing a large amount of money. %d", amount);
    }
    else {
        printf("You are withdrawing : %d", amount);
    }
    return 0;
}