#include <stdio.h>
int main() {
    printf("Swap two numbers without using a third variable\n");
    int a, b, c;
    printf("Enter 1st numbers: ");
    scanf("%d", &a);
    printf("Enter 2nd numbers: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}   