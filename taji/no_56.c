#include<stdio.h>

int main(void) {
	int a[16];
	int x;
	printf("input number: ");
	scanf("%d", &x);

	for (int i = 0; i <= 15; i++) {
		if ((x % 2) == 1) {
			a[i] = 1;
		}
		else {
			a[i] = 0;
		}
		x = x / 2;
	}
	
	for (int i = 15; 0 <= i; i--) {
		printf("%d", a[i]);
	}


	return 0;
}
