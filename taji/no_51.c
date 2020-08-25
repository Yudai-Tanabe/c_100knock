#include<stdio.h>

int main(void) {
	int a, x, y, z;

	printf("input money: ");
	scanf("%d", &a);

	x = a / 100;
	y = (a % 100) / 10;
	z = (a % 100) % 10;

	printf("100‰~‹Ê%d–‡,10‰~‹Ê%d–‡,1‰~‹Ê%d–‡\n", x, y, z);

	return 0;
}
