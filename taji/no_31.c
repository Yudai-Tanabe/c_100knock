#include<stdio.h>

int main(void) {
	int a;

	printf("input number: ");
	scanf("%d", &a);

	for (int j = 1; j <= a; j++) {
		printf("*");
		if ((j != 0) && (j % 5) == 0) {
			printf(" ");
		}
	}



	return 0;
}
