#include<stdio.h>

int main(void) {
	int a, b, c;
	printf("input number: ");
	scanf("%d", &a);

	if (((-10 <= a) && (a < 0)) || (10 <= a)) {
		printf("OK\n");
	}
	else {
		printf("NG\n");
	}

	return 0;
}
