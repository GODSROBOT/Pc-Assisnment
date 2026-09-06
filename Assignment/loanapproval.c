#include <stdio.h>

int main()
{
	float monthly_income;
	int credit_score;

	printf("Enter monthly income: ");
	scanf("%f", &monthly_income);
	printf("Enter credit score: ");
	scanf("%d", &credit_score);

	if (monthly_income <= 30000) {
		printf("Loan rejected. Monthly income must be above 30000.\n");
	} else if (credit_score > 750) {
		printf("Loan approved instantly.\n");
	} else {
		printf("Loan sent for manual review.\n");
	}

	return 0;
}
