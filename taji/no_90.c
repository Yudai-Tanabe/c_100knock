#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int a[52];
	char h[] = { "�n�[�g" };
	char c[] = {"�N���[�o"};
	char d[] = { "�_�C��" };
	char s[] = { "�X�y�[�h" };
	int num, sta, cnt, tmp;
	int i, j;
	int x, y;
	unsigned int now = (unsigned int)time(0);
	srand(now);
	cnt = 0;
	sta = 0;

	

	for (i = 1; i <= 52; i++) {
		a[i - 1] = i;
	}

	for (i = 0; i < 52; i++) {
		x = rand() % 52;
		tmp = a[i];
		a[i] = a[x];
		a[x] = tmp;
	}

	for (i = 0; i < 2; i++) {
		if (((a[i] % 13) + 1) <= 10) {
			a[i] = (a[i] % 13) + 1;
			printf("%d ", a[i]);
		}
		else if (10 < ((a[i] % 13) + 1)) {
			a[i] = 10;
			printf("%d ", a[i]);
		}
	}

	printf(": ���v%d", a[0] + a[1]);


	return 0;
}