#include <stdio.h>
int main() {
    printf("Average marks calculator \n");
        int sub1, sub2, sub3, sub4, sub5, total_marks;
            printf("Enter the marks of 5 subjects");
            printf("\nEnter the marks of subject 1 : ");
            scanf("%d", &sub1);
            printf("Enter the marks of subject 2 : ");
            scanf("%d", &sub2);
            printf("Enter the marks of subject 3 : ");
            scanf("%d", &sub3);
            printf("Enter the marks of subject 4 : ");
            scanf("%d", &sub4);
            printf("Enter the marks of subject 5 : ");
            scanf("%d", &sub5);
            total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
            int average_marks = total_marks / 5;
            printf("Your Total marks : %d\n", total_marks);
            printf("Average marks : %d", average_marks);
}