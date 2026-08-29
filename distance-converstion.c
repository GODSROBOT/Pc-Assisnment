#include <stdio.h>
void main() {
    printf("The distace conversion calculator \n");
    int km, m;
    printf("Enter the distance in kilometers : ");
    scanf("%d", &km);
    m = km * 1000;
    printf("The distance in meters is : %d", m);
}