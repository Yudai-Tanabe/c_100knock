#include<stdio.h>

int main(void) {
	int a, b, c;
	printf("input number: ");
	scanf("%d", &a);

	if (a < -10) {
		printf("range 1\n");
	}
	else if ((-10 <= a) && (a < 0)) {
		printf("range 2\n");
	}
	else {
		printf("range 3\n");
	}

	return 0;
}
