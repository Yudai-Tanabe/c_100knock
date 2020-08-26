#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int a[4];
	int b[4];
	int tmpa[4];
	int tmpb[4];
	int i, j;
	int x, y, hit, blow;
	hit = 0;
	blow = 0;
	unsigned int now = (unsigned int)time(0);
	srand(now);

	printf("4Œ…‚Ì”š‚ğ“ü—Í: ");
	scanf("%d", &x);

	//a[0] = x % 10;
	//for (int i = 1; i < 4; i++) {
	//	double j, k;
	//	k = 10.0;
	//	j = i;
	//	a[i] = ((i - a[i - 1]) % pow(k, j + 1)) / pow(k, j);
	//	printf("%d\n", a[i]);
	//}

	a[3] = x % 10;
	a[2] = ((x - a[3]) % 100) / 10;
	a[1] = ((x - a[2]) % 1000) / 100;
	a[0] = ((x - a[1]) % 10000) / 1000;

	printf("4Œ…‚Ì”š‚ğ“ü—Í: ");
	scanf("%d", &y);

	b[3] = y % 10;
	b[2] = ((y - b[3]) % 100) / 10;
	b[1] = ((y - b[2]) % 1000) / 100;
	b[0] = ((y - b[1]) % 10000) / 1000;

	//for (i = 0; i < 4; i++) {
	//	b[i] = rand() % 10;
	//	printf("%d", b[i]);
	//}
	printf("\n");

	for (i = 0; i < 4; i++) {
		tmpa[i] = a[i];
		tmpb[i] = b[i];
	}

	for (i = 0; i < 4; i++) {
		if (a[i] == b[i]) {
			hit++;
			tmpa[i] = -1;
			tmpb[i] = -2;
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (tmpa[j] == tmpb[i]) {
				tmpb[i] = -2;
				blow++;
				break;
			}
		}
	}

	printf("hit count\t%d\n", hit);
	printf("blow count\t%d\n", blow);

	



	return 0;
}