#include<stdio.h>

int main(void) {
	int a, b, tmp;
	printf("input a: ");
	scanf("%d", &a);
	printf("input b: ");
	scanf("%d", &b);

	tmp = a;
	a = b;
	b = tmp;

	printf("a = %d, b = %d\n", a, b);


	return 0;
}