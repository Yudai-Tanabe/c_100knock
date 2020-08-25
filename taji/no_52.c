#include<stdio.h>

int main(void) {
	int a;

	printf("input year: ");
	scanf("%d", &a);

	if ((a % 4) == 0) {
		if (((a % 100 != 0)) || ((a % 400) == 0)) {
			printf("%d”N‚Í‰[”N‚Å‚ ‚é\n", a);
		}
		else {
			printf("%d”N‚Í‰[”N‚Å‚È‚¢\n", a);
		}
	}
	else {
		printf("%d”N‚Í‰[”N‚Å‚È‚¢\n", a);
	}

	return 0;
}
