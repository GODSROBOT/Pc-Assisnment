#include <stdio.h>
int main() {
    printf("This is temperature conversion calculator Celsius to Fahrenheit\n");
    int celsius, fahrenheit;
    printf("Enter the temperature in celsius : ");
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in fahrenheit : %d", fahrenheit);
}