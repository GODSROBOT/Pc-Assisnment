#include <stdio.h>
int PI = 3.14;

int main() {
    printf("This is Circle measurements calculator \n");
    int diameter, area, circumference, radius;
    printf("Enter the radius of the circle : ");
    scanf("%d", &radius);
    diameter = 2 * radius;
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of circle : %d\n", area);
    printf("Circumference of circle : %d\n", circumference);
    return 0;
}