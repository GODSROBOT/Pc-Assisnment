#include <stdio.h>
int main() {
    int bmi;
    printf("Enter your BMI: ");
    scanf("%d", &bmi);
    if(bmi < 18.5) {
        printf("You are underweight");
    } else if(bmi >= 18.5 && bmi < 24.9) {
        printf("You have a normal weight");
    } else if(bmi >= 25 && bmi < 29.9) {
        printf("You are overweight");
    } else {
        printf("You are obese");
    }
    return 0;
}