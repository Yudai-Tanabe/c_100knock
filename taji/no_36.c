#include <stdio.h>

int main(void) {
	int n, m;
	int array[10] = { 3,7,0,8,4,1,9,6,5,2 };
	printf("input index1: ");
	scanf("%d", &n);
	printf("input index2: ");
	scanf("%d", &m);

	printf("%d * %d = %d\n", array[n], array[m], array[n] * array[m]);

	return 0;
}