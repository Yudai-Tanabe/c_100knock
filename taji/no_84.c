#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(void) {

	srand(time(NULL));

	int a[52];
	char s[] = { "スペード" };
	char h[] = { "ハート" };
	char c[] = { "クローバ" };
	char d[] = { "ダイヤ" };
	char m[20];
	int x, y;

	int tmp;
	for (int i = 0; i < 52; i++) {
		a[i] = i + 1;
	}
	for (int i = 0; i < 10000; i++) {
		x = rand() % 52;
		Sleep(5);
		srand(time(NULL));
		y = rand() % 52;
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
	}
	for (int i = 0; i < 52; i++) {
		if (a[i] <= 13) {
			strcpy(m, s);
			printf("%s\t%d", m, a[i] % 13);
		}
		else if ((13 < a[i]) && (a[i] <= 26)) {
			strcpy(m, h);
			printf("%s\t\t%d", m, a[i] % 13);
		}
		else if ((26 < a[i]) && (a[i] <= 39)) {
			strcpy(m, c);
			printf("%s\t%d", m, a[i] % 13);
		}
		else if ((39 < a[i]) && (a[i] <= 52)) {
			strcpy(m, d);
			printf("%s\t\t%d", m, a[i] % 13);
		}
		printf("\n");
	}


	return 0;
}
