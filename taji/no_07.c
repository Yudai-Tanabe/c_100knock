#include<stdio.h>

int main(void) {
	int a, b;
	printf("input number:");
	scanf("%d", &a);
	if (a == 0) {
		printf("zero\n");
	}
	else {
		printf("not zero\n");
	}

	return 0;
}