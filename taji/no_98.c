#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int a[5][5];
	int b[75];
	int c[75];
	int d[5];
	int num, sta, cnt;
	int i, j;
	int x, y;
	unsigned int now = (unsigned int)time(0);
	srand(now);
	cnt = 0;
	sta = 0;

	for (i = 1; i <= 75; i++) {
		b[i - 1] = i;
		c[i - 1] = i;
	}


	//�_�u��̂Ȃ��r���S�\�̍쐬
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			x = rand() % 75;
			while (1) {
				if (x == 74 && b[x] == -1) {
					x = 0;
				}
				else if (b[x] == -1) {
					x++;
				}
				else {
					a[i][j] = b[x];
					b[x] = -1;
					break;
				}
			}

			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	while (sta != 2) {
		cnt++;
		x = rand() % 75;
		//�_�u��̂Ȃ������쐬
		while (1) {
			if (x == 74 && c[x] == -1) {
				x = 0;
			}
			else if (c[x] == -1) {
				x++;
			}
			else {
				num = c[x];
				c[x] = -1;
				break;
			}
		}
		printf("%d��: %d  ", cnt, num);
		//��v���邩
		sta = 0;
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				if (a[i][j] == num) {
					a[i][j] = 0;
					sta = 1;
					i = 5;
					j = 5;
				}

			}
		}

		//��v������
		if (sta == 1) {
			printf("hit!\n");
			for (i = 0; i < 5; i++) {
				for (j = 0; j < 5; j++) {
					printf("%d\t", a[i][j]);
				}
				printf("\n");
			}
			//����
			for (i = 0; i < 5; i++) {
				for (j = 0; j < 5; j++) {
					d[j] = a[i][j];
				}
				if (d[0] == d[1] && d[0] == d[2] && 
						d[0] == d[3] && d[0] == d[4]) {
					sta = 2;
					break;
				}
			}
			//�c��
			for (j = 0; j < 5; j++) {
				for (i = 0; i < 5; i++) {
					d[i] = a[i][j];
				}
				if (d[0] == d[1] && d[0] == d[2] &&
					d[0] == d[3] && d[0] == d[4]) {
					sta = 2;
					break;
				}
			}
			//�΂�
			for (i = 0; i < 5; i++) {
				d[i] = a[i][i];
			}
			if (d[0] == d[1] && d[0] == d[2] &&
				d[0] == d[3] && d[0] == d[4]) {
				sta = 2;
				break;
			}

			for (i = 0; i < 5; i++) {
				d[i] = a[i][4 - i];
			}
			if (d[0] == d[1] && d[0] == d[2] &&
				d[0] == d[3] && d[0] == d[4]) {
				sta = 2;
				break;
			}
		}

		printf("\n");

	}

	printf("\n***** BINGO *****\n");

	return 0;
}