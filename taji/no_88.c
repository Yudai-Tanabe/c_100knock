#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int m, n, cnt;

	n = (rand() % 100) + 1;
	printf("数を入力: ");
	scanf("%d", &m);
	cnt = 1;

	while (m != n) {
		if (m < n) {
			printf("それより大きいです\n");
		}
		else {
			printf("それより小さいです\n");
		}
		cnt++;
		printf("数を入力: ");
		scanf("%d", &m);
	}

	printf("正解!! %d回目でクリア\n", cnt);


	return 0;
}