#include<stdio.h>

int main(void) {
	int a[3];
	int tmp;

	printf("‚R‚Â‚Ì’l‚ð“ü—Í: ");
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	printf("\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (a[j] > a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}

	printf("%d\n", a[1]);


	return 0;
}
