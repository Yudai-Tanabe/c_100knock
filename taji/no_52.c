#include<stdio.h>

int main(void) {
	int a;

	printf("input year: ");
	scanf("%d", &a);

	if ((a % 4) == 0) {
		if (((a % 100 != 0)) || ((a % 400) == 0)) {
			printf("%d年は閏年である\n", a);
		}
		else {
			printf("%d年は閏年でない\n", a);
		}
	}
	else {
		printf("%d年は閏年でない\n", a);
	}

	return 0;
}
