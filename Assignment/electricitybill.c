#include <stdio.h>

int main()
{
	int units;
	int rate;
	int bill;

	printf("Enter units consumed: ");
	scanf("%d", &units);

	if (units < 0) {
		printf("Invalid units consumed.\n");
	} else if (units <= 100) {
		rate = 5;
		bill = units * rate;
		printf("Total electricity bill: %d\n", bill);
	} else if (units <= 200) {
		rate = 7;
		bill = units * rate;
		printf("Total electricity bill: %d\n", bill);
	} else if (units <= 300) {
		rate = 10;
		bill = units * rate;
		printf("Total electricity bill: %d\n", bill);
	} else {
		rate = 12;
		bill = units * rate;
		printf("Total electricity bill: %d\n", bill);
	}

	return 0;
}
