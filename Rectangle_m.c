#include <stdio.h>
int main() {
    printf("This is Reactanlge measurements calculator \n");
    int length, breadth, area, perimeter;
    printf("Enter the length and breadth of the rectangle : ");
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area of rectangle : %d\n", area);
    printf("Perimeter of rectangle : %d\n", perimeter);
}