#include <stdio.h>

int main(void) {
	int n;
	printf("input number: ");
	scanf("%d", &n);
	switch(n) {
		case 1:
			printf("one\n");
			break;
		case 2:
			printf("two\n");
			break;
		case 3:
			printf("three\n");
			break;
		default:
			printf("other\n");
	}
}