#include<stdio.h>

int main(void) {
	int a, b;
	printf("‹——£ ");
	scanf("%d", &a);

	if (a < 1700) {
		b = 610;
	}
	else {
		b = (a - 1700);
		b = (b / 313) + 1;
		b = (b * 80);
		b = b + 610;
	}

	printf("‹àŠz %d\n", b);


	return 0;
}