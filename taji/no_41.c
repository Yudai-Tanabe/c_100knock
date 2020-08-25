#include<stdio.h>

int main(void) {
	int n;
	printf("input number: ");
	scanf("%d", &n);

	if ((0 < n) && (n <= 9)) {
		printf("%d is a single figure.\n", n);
	}
	else {
		printf("%d is not a single figure.\n", n);
	}

	return 0;
}