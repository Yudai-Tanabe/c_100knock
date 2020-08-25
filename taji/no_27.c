#include <stdio.h>

int main(void) {
	int n, x;
	x = 0;
	printf("input number: ");
	scanf("%d", &n);
	if (0 < n) {
		for (int i = 1; i <= n; i++) {
			x = x + i;
		}
	}
	printf("sum = %d\n", x);
}