#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int m, n, cnt;

	n = (rand() % 100) + 1;
	printf("�������: ");
	scanf("%d", &m);
	cnt = 1;

	while (m != n) {
		if (m < n) {
			printf("������傫���ł�\n");
		}
		else {
			printf("�����菬�����ł�\n");
		}
		cnt++;
		printf("�������: ");
		scanf("%d", &m);
	}

	printf("����!! %d��ڂŃN���A\n", cnt);


	return 0;
}