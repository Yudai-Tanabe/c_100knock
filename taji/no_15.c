#include<stdio.h>

int main(void) {
	int a, b;
	int n;
	printf("input number: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i += 2) {
		printf("%d\n", i);
	}
	

	return 0;
}