#include <stdio.h>

int main()
{
	float distance;

	printf("Enter distance in kilometers: ");
	scanf("%f", &distance);

	if (distance < 0) {
		printf("Invalid distance.\n");
	} else if (distance <= 5) {
		printf("Fare category: 0-5 km, Fare: 100\n");
	} else if (distance <= 10) {
		printf("Fare category: 5-10 km, Fare: 200\n");
	} else if (distance <= 20) {
		printf("Fare category: 10-20 km, Fare: 350\n");
	} else {
		printf("Fare category: Above 20 km, Fare: 500\n");
	}

	return 0;
}
