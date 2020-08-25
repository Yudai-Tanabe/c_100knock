#include<stdio.h>

int main(void) {
	int a, b, c;
	printf("input number: ");
	scanf("%d", &a);

	if ((a < -10) || (10 <= a)) {
		printf("OK\n");
	}

	return 0;
}
