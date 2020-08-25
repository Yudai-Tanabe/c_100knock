#include <stdio.h>

int main(void) {
	int n;
	printf("input number: ");
	scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			printf("*");
		}
		printf("\n");
}