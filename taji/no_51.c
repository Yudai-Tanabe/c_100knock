#include<stdio.h>

int main(void) {
	int a, x, y, z;

	printf("input money: ");
	scanf("%d", &a);

	x = a / 100;
	y = (a % 100) / 10;
	z = (a % 100) % 10;

	printf("100�~��%d��,10�~��%d��,1�~��%d��\n", x, y, z);

	return 0;
}
