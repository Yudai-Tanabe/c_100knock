#include<stdio.h>

int main(void) {
	int a, b;
	double c;
	printf("���~�H ");
	scanf("%d", &a);
	printf("�P�h���͉��~�H ");
	scanf("%d", &b);

	c = ((a / (double)b) - (a / b)) * 100;
	printf("%d�~��%d�h��%.0f�Z���g\n", a, a / b, c);



	return 0;
}