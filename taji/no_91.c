#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int a[52];
	char h[] = { "ハート" };
	char c[] = {"クローバ"};
	char d[] = { "ダイヤ" };
	char s[] = { "スペード" };
	int sum, cnt, tmp;
	int i, j;
	int x, y;
	unsigned int now = (unsigned int)time(0);
	srand(now);
	sum = 0;
	cnt = 0;

	for (i = 1; i <= 52; i++) {
		a[i - 1] = i;
	}

	for (i = 0; i < 52; i++) {
		x = rand() % 52;
		tmp = a[i];
		a[i] = a[x];
		a[x] = tmp;
	}

	for (i = 0; i < 52; i++) {
		if (((a[i] % 13) + 1) <= 10) {
			a[i] = (a[i] % 13) + 1;
		}
		else if (10 < ((a[i] % 13) + 1)) {
			a[i] = 10;
		}
	}

	sum = a[0] + a[1];
	printf("%d %d :", a[0], a[1]);

	cnt = 2;
	while (1) {
		printf("合計%d\n", sum);
		if (21 < sum) {
			printf("バストです\n");
			break;
		}
		if (17 <= sum) {
			printf("これでOKです\n");
			break;
		}
		else {
			printf("もう一枚引きます\n");
			printf("%d\n", a[cnt]);
		}

		sum = sum + a[cnt];
		cnt++;
	}
	return 0;
}