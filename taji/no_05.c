#include<stdio.h>

int main(void) {
	int a, b;
	printf("input 1st number:");
	scanf("%d", &a);
	printf("input 2nd number:");
	scanf("%d", &b);
	printf("�a: %d\n", a + b);
	printf("��: %d\n", a - b);
	printf("��: %d\n", a * b);
	printf("��: %d, �]��: %d\n", a / b, a % b);
	return 0;
}