#include<stdio.h>

int main(void) {

	for (int i = 1; i <= 100; i++) {
		if ((i % 3) == 0) {
			if ((i % 5) == 0) {
				printf("foobar\n");
			}
			printf("foo\n");
		}
		else if ((i % 5) == 0) {
			printf("bar\n");
		}
		else {
			printf("%d\n", i);
		}
	}

	return 0;
}
