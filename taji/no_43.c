#include<stdio.h>

int main(void) {
	int a, b, c, x;
	printf("input a: ");
	scanf("%d", &a);
	printf("input b: ");
	scanf("%d", &b);
	printf("input c: ");
	scanf("%d", &c);

	x = (b * b) - (4 * a * c);

	if (x < 0) {
		printf("2�̋�����\n");
	}
	else if (x == 0) {
		printf("�d��\n");
	}
	else {
		printf("�Q�̎�����\n");
	}

	return 0;
}