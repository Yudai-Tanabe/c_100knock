#include<stdio.h>

int main(void) {
	int n = 0;
	int array[10] = { 3,7,0,8,4,1,9,6,5,2 };

	for (int i = 0; i < 10; i++) {
		printf("%d\n", array[n]);
		n = array[n];
	}

	return 0;
}