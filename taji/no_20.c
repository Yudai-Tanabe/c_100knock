#include<stdio.h>

int main(void) {
	int a, b, c;
	printf("input 1st value: ");
	scanf("%d", &a);
	printf("input 2nd value: ");
	scanf("%d", &b);

	c = a / b;
	printf("%d\n", c);
	c = c * b;
	printf("%d\n", c);

	return 0;
}
