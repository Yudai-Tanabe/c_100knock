#include <stdio.h>

int main(void) {
	int n, x;
	x = 0;
	for (int i = 0; i < 5; i++) {
		printf("input number: ");
		scanf("%d", &n);
		x = x + n;
	}
	printf("sum = %d\n", x);
}