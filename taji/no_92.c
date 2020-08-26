#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n1, n2, n3, n4, x;
	int a, b;
	x = 0;

	
	for (int i = 1; i <= 50; i++) {
		n1 = i % 10;
		n2 = ((i - n1) % 100) / 10;
		n3 = ((i - n2) % 1000) / 100;
		n4 = ((i - n3) % 10000) / 1000;
		if ((i % 3) == 0 || (n1 == 3) || (n2 == 3)
			|| (n3 == 3) || (n4 == 3)){
			x = 1;
		}
		else {
			x = 0;
		}
		if (x == 1) {
			printf("aho ");
		}
		printf("%d\n", i);
	}


	return 0;
}