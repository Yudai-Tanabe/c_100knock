#include <stdio.h>

int main(void) {
	int n;
	printf("input number: ");
	scanf("%d", &n);
	for (int i = 1; i <= 9; i++) {
		if (i != n) {
			printf("%d\n", i);
		}
		else {
			i++;
		}
	}
	printf("\n");
}