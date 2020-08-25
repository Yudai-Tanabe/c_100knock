#include<stdio.h>

int main(void) {
	int a, b;
	double c;
	printf("何円？ ");
	scanf("%d", &a);
	printf("１ドルは何円？ ");
	scanf("%d", &b);

	c = ((a / (double)b) - (a / b)) * 100;
	printf("%d円は%dドル%.0fセント\n", a, a / b, c);



	return 0;
}