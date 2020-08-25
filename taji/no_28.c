#include <stdio.h>

int main(void) {
	int n, x;
	x = 1;
	printf("input number: ");
	scanf("%d", &n);
	if (0 < n) {
		x = n;
		for (int i = n - 1; 0 < i; i--) {
			x = x * i;
		}
	}
	printf("factorial = %d\n", x);
}