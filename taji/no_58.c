#include<stdio.h>

int main(void) {
	int a;
	printf("input number: ", a);
	scanf("%d", &a);

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
