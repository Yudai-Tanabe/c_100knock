#include<stdio.h>

int main(void) {
	int n;
	int array[10] = { 3,7,0,8,4,1,9,6,5,2 };
	printf("input index: ");
	scanf("%d", &n);

	printf("value = %d\n", array[array[n]]);

	return 0;
}