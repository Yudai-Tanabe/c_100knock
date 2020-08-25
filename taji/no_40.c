#include<stdio.h>

int main(void) {
	int n;
	printf("input number: ");
	scanf("%d", &n);

	if ((n % 2) == 0) {
		printf("%d is even\n", n);
	}
	else {
		printf("%d is odd\n", n);
	}

	return 0;
}