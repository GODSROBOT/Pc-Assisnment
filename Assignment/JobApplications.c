#include <stdio.h>

int main()
{
	float marks;
	int experience;

	printf("Enter marks percentage: ");
	scanf("%f", &marks);
	printf("Enter years of experience: ");
	scanf("%d", &experience);

	if (marks < 60) {
		printf("Application rejected. Minimum marks required: 60%%.\n");
	} else if (experience >= 2) {
		printf("Shortlisted for an interview.\n");
	} else {
		printf("Shortlisted, but not called for an interview.\n");
	}

	return 0;
}
