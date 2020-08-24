#include<stdio.h>

int main(void) {
	int a, b;
	printf("input number:");
	scanf("%d", &a);
	if (a > 0) {
		printf("absolute value is %d\n", a);
	}
	else if(a == 0){
		printf("absolute value is %d\n", a);
	}
	else {
		printf("absolute value is %d\n", a * (-1));
	}

	return 0;
}