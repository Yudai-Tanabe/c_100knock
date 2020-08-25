#include<stdio.h>

int main(void) {
	int a, b;
	int x = 0;

	printf("２つの値をスペースで区切って入力: ");
	scanf("%d %d", &a, &b);

	for (int i = 2; i <= a; i++) {
		if ((a % i) == 0 && (b % i) == 0) {
			x = 1;
		}
	}
	if (x == 0) {
		printf("互いに素\n");
	}
	else {
		printf("互いに素でない\n");
	}

	return 0;
}
