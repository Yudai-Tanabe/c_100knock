#include<stdio.h>

int main(void) {
	int a, b, c;
	printf("input number: ");
	scanf("%d", &a);

	if ((-5 <= a) && (a < 10)) {
		printf("OK\n");
	}
	else {
		printf("NG\n");
	}

	return 0;
}
