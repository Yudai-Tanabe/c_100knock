#include<stdio.h>

int main(void) {
	int n;
	printf("input number: ");
	scanf("%d", &n);
	int str[11];
	for (int i = 0; i < 10; i++) {
		str[i] = n;
		printf("%d\n", str[i]);
	}


	return 0;
}