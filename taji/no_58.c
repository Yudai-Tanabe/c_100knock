#include<stdio.h>

int main(void) {
	int a[5];

	for (int i = 0; i < 5; i++) {
		printf("input data[%d]: ", i);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\t:", a[i]);
		for (int j = 0; j <= a[i]; j++) {
			printf("*");
			if ((j != 0) && (j % 5) == 0) {
				printf(" ");
			}
		}
		printf("\n");
	}



	return 0;
}
