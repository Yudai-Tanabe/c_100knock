#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int a[5][5];
	int b[75];
	int tmpa[4];
	int tmpb[4];
	int i, j;
	int x, y, hit, blow;
	hit = 0;
	blow = 0;
	unsigned int now = (unsigned int)time(0);
	srand(now);

	for (i = 1; i <= 75; i++) {
		b[i- 1] = i;
	}


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
	
	return 0;
}