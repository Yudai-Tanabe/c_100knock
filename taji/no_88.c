#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int m, n, cnt;

	n = (rand() % 100) + 1;
	printf("”‚ğ“ü—Í: ");
	scanf("%d", &m);
	cnt = 1;

	while (m != n) {
		if (m < n) {
			printf("‚»‚ê‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		else {
			printf("‚»‚ê‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		cnt++;
		printf("”‚ğ“ü—Í: ");
		scanf("%d", &m);
	}

	printf("³‰ğ!! %d‰ñ–Ú‚ÅƒNƒŠƒA\n", cnt);


	return 0;
}