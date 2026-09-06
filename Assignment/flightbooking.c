#include <stdio.h>

int main()
{
	int ticket_valid, arrival_on_time;

	printf("Enter ticket validity (1 = valid, 0 = invalid): ");
	scanf("%d", &ticket_valid);
	printf("Enter arrival status (1 = on time, 0 = late): ");
	scanf("%d", &arrival_on_time);

	if (ticket_valid == 0) {
		printf("Boarding denied. The ticket is invalid.\n");
	} else if (arrival_on_time == 0) {
		printf("Boarding denied. The gate has closed.\n");
	} else {
		printf("Boarding allowed.\n");
	}

	return 0;
}
