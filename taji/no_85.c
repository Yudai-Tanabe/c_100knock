#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int num;
	int x, y;
	int res;
	unsigned int now = (unsigned int)time(0);
	srand(now);

	rand() % 10;

	printf("�΂̐�����͂��Ă�������(10�ȏ�) :");
	scanf("%d", &num);


	while (1) {
		printf("�΂̐�: %d\n", num);
		printf("�v���C���[�P�̔Ԃł�\n");
		printf("�����(�P�`�R��)?");
		scanf("%d", &x);

		num = num - x;
		if (num <= 0) {
			res = 2;
			break;
		}

		printf("�΂̐�: %d\n", num);
		printf("�v���C���[�Q�̔Ԃł�\n");
		printf("�����(�P�`�R��)?");
		scanf("%d", &y);

		num = num - y;
		if (num <= 0) {
			res = 1;
			break;
		}
	}

	if (res == 1) {
		printf("�v���C���[�P�̏���\n");
	}
	else if (res == 2) {
		printf("�v���C���[�Q�̏���\n");
	}
	return 0;
}