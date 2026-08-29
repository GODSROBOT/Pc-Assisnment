#include <stdio.h>
int main() {
    printf("The discount calculator \n");
    float original_price, discount_percentage, discounted_price;
    printf("Enter the original price : ");
    scanf("%f", &original_price);
    printf("Enter the discount percentage : ");
    scanf("%f", &discount_percentage);
    discounted_price = original_price - (original_price * discount_percentage / 100);
    printf("Original price : %.2f\n", original_price);
    printf("Discount percentage : %.2f\n", discount_percentage);
    printf("The discounted price is : %.2f", discounted_price);
    return 0;
}