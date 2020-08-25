#include<stdio.h>

int main(void) {
	int a, b, c;
	printf("input number: ");
	scanf("%d", &a);

	if ((5 < a) && (a < 20)) {
		printf("OK\n");
	}

	return 0;
}
