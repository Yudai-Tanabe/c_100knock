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
		printf("2‚Â‚Ì‹•”‰ð\n");
	}
	else if (x == 0) {
		printf("d‰ð\n");
	}
	else {
		printf("‚Q‚Â‚ÌŽÀ”‰ð\n");
	}

	return 0;
}