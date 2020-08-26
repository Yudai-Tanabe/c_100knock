#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int m, n, u, d, o, cnt;

	printf("数を入力: ");
	scanf("%d", &m);
	cnt = 1;
	n = 50;
	u = 100;
	d = 1;
	printf("%dですか？: ", n);
	scanf("%d", &o);

	while (o != 0) {

		if (o == 1) {
			d = n;
			n = n + ((u - n) / 2);
		}
		else {
			u = n;
			n = d + ((n - d) / 2);
		}
		cnt++;
		printf("%dですか？: ", n);
		scanf("%d", &o);
	}

	printf("正解!! %d回目でクリア\n", cnt);


	return 0;
}