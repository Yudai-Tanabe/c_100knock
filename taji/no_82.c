#include<stdio.h>

int main(void) {
	int a[15][15] = { 0 };

	a[0][0] = 1;

	for (int i = 1; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (j == 0) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
		}
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (a[i][j] != 0) {
				printf("%5d ", a[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
