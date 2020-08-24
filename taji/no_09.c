#include<stdio.h>

int main(void) {
	int a, b;
	printf("input number:");
	scanf("%d", &a);
	if (a > 0) {
		printf("positive\n");
	}
	else if(a == 0){
		printf("zero\n");
	}
	else {
		printf("negative\n");
	}

	return 0;
}