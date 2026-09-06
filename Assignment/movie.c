#include <stdio.h>

int main() {
    int age;

    printf("The Movie Ticket Booking System\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Entry allowed. You are eligible to watch the movie.\n");
    } else {
        printf("Entry denied. You must be 18 or older to watch the movie.\n");
    }

    return 0;
}