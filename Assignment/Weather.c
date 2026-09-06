#include <stdio.h>

int main()
{
	float temperature;

	printf("Enter temperature in Celsius: ");
	scanf("%f", &temperature);

	if (temperature < 10) {
		printf("Wear heavy jacket.\n");
	} else if (temperature <= 20) {
		printf("Wear a sweater.\n");
	} else if (temperature <= 30) {
		printf("Wear light clothing.\n");
	} else {
		printf("Wear cotton clothes and stay hydrated.\n");
	}

	return 0;
}
