#include<stdio.h>

int main(void) {
	int a, b;
	int x = 0;

	printf("�Q�̒l���X�y�[�X�ŋ�؂��ē���: ");
	scanf("%d %d", &a, &b);

	for (int i = 2; i <= a; i++) {
		if ((a % i) == 0 && (b % i) == 0) {
			x = 1;
		}
	}
	if (x == 0) {
		printf("�݂��ɑf\n");
	}
	else {
		printf("�݂��ɑf�łȂ�\n");
	}

	return 0;
}
