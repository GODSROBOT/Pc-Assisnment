#include <stdio.h>
int main() {
    int orderAmount;
    printf("Enter the order amount: ");
    scanf("%d", &orderAmount);
    if(orderAmount >= 500) {
        printf("Free delivery for orders above 500;");
    } else if(orderAmount < 500) {
        printf("₹50 delivery charge applies");
    }
    return 0;
}