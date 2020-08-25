#include<stdio.h>

int main(void) {
	int a, b;
	printf("l” ");
	scanf("%d", &a);

	if (a < 5) {
		b = 600 * a;
	}
	else if((5 <= a) && (a < 20)){
		b = 550 * a;
	}
	else {
		b = 500 * a;
	}

	printf("—¿‹à %d\n", b);


	return 0;
}