#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int myte, cpte, res, mysc, cpsc;
	int i = 0;
	mysc = 0;
	cpsc = 0;

	while (i < 5) {

		cpte = rand() % 3;
		printf("���Ȃ��̎��I��ł�������(�O�[�O�A�`���L�P�A�p�[�Q): ");
		scanf("%d", &myte);
		printf("\n");

		switch (myte) {
		case 0:
			printf("�O�[");
			break;
		case 1:
			printf("�`���L");
			break;
		case 2:
			printf("�p�[");
			break;
		}
		printf("\n");

		switch (cpte) {
		case 0:
			printf("�R���s���[�^�̓O�[");
			break;
		case 1:
			printf("�R���s���[�^�̓`���L");
			break;
		case 2:
			printf("�R���s���[�^�̓p�[");
			break;
		}
		printf("\n\n");


		if ((myte - cpte) == (-1)
			|| (myte - cpte) == 2) {
			res = 0;
		}
		else if (myte == cpte) {
			res = 1;
		}
		else {
			if (myte < 0 || 2 < myte) {
				res = 3;
			}
			else {
				res = 2;
			}
		}

		switch (res) {
		case 0:
			printf("���Ȃ��̏���\n");
			mysc++;
			i++;
			printf("���Ȃ�%d���A�킽��%d��\n", mysc, cpsc);
			break;
		case 1:
			printf("������\n");
			printf("���Ȃ�%d���A�킽��%d��\n", mysc, cpsc);
			break;
		case 2:
			printf("���Ȃ��̕���\n");
			cpsc++;
			i++;
			printf("���Ȃ�%d���A�킽��%d��\n", mysc, cpsc);
			break;
		}
		printf("\n");
	}
	
	if (cpsc < mysc) {
		printf("���Ȃ��̑��������ł��B�Q��܂����B\n");
	}
	else {
		printf("�킽���̑����D���ł��B\n");
	}


	return 0;
}
