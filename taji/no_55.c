#include<stdio.h>

int main(void) {
	int a;
	int i, j, k;

	for (i = 0; i < 3; i++) {
		for (k = 0; k < 9; k++) {
			printf("�Ƃ�� ");
		}
		for (j = 0; j < 3; j++) {
			printf("�܂���� ");
		}
		printf("�܂��\n");
	}

	return 0;
}
