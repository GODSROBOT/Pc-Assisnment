#include <stdio.h>
void main() {
    printf("The Shopping bill calculator \n");
    char item_name[30];
    float item_price, item_quantity, sub_total, tax, total_amount;
    printf("Enter the item name : ");
    scanf("%s", item_name);
    printf("Enter the item price : ");
    scanf("%f", &item_price);
    printf("Enter the item quantity : ");
    scanf("%f", &item_quantity);
    sub_total = item_price * item_quantity;
    tax = sub_total * 0.05;
    total_amount = sub_total + tax;
    printf("Subtotal : %.2f\n", sub_total);
    printf("Tax : %.2f\n", tax);
    printf("Total amount : %.2f\n", total_amount);
}