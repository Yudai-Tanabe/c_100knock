#include<stdio.h>

int main(void) {
	int a;

	printf("input year: ");
	scanf("%d", &a);

	if ((a % 4) == 0) {
		if (((a % 100 != 0)) || ((a % 400) == 0)) {
			printf("%d�N�͉[�N�ł���\n", a);
		}
		else {
			printf("%d�N�͉[�N�łȂ�\n", a);
		}
	}
	else {
		printf("%d�N�͉[�N�łȂ�\n", a);
	}

	return 0;
}
