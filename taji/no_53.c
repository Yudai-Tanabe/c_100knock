#include<stdio.h>

int main(void) {
	int a;
	int i;

	printf("input number: ");
	scanf("%d", &a);

	i = 2;

	while (a != 1) {
		if ((a % i) == 0) {
			printf("%3d", i);
			a = a / i;
		}
		else {
			i++;
		}
	}
	return 0;
}