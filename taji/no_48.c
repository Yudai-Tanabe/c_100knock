#include<stdio.h>

int main(void) {
	int a;
	printf("input number: ");
	scanf("%d", &a);

	while (a != 1) {
		if ((a % 2) == 0) {
			a = a / 2;
		}
		else {
			a = (a * 3) + 1;
		}
		printf("%d\n", a);
	}



	printf("%d\n", a);


	return 0;
}