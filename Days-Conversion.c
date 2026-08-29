#include <stdio.h>
void main() {
    printf(" The days conversion calculator \n");
    int days , weeks, remaining_days;
    printf("Enter the total days : ");
    scanf ("%d", &days);
    weeks = days / 7;
    remaining_days = days % 7;
    printf("Total weeks : %d\n", weeks);
    printf("Remaining days : %d", remaining_days);
}