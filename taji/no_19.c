#include<stdio.h>

int main(void) {
	int n;
	int str[11];
	for (int i = 0; i < 5; i++) {
		printf("input number: ");
		scanf("%d", &n);
		str[i] = n;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d\n", str[i]);
	}

	return 0;
}