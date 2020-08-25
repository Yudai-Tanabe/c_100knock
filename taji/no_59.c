#include<stdio.h>

int main(void) {
	int a[3][3];
	int b[3][3];
	int c[3][3];

	printf("ÇPÇ¬ÇﬂÇÃçsóÒ\n");
	scanf("%d %d %d", &a[0][0], &a[0][1], &a[0][2]);
	scanf("%d %d %d", &a[1][0], &a[1][1], &a[1][2]);
	scanf("%d %d %d", &a[2][0], &a[2][1], &a[2][2]);

	printf("ÇQÇ¬ÇﬂÇÃçsóÒ\n");
	scanf("%d %d %d", &b[0][0], &b[0][1], &b[0][2]);
	scanf("%d %d %d", &b[1][0], &b[1][1], &b[1][2]);
	scanf("%d %d %d", &b[2][0], &b[2][1], &b[2][2]);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}



	return 0;
}
