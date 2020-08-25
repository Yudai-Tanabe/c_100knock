#include<stdio.h>

int main(void) {
	int a;
	int i, j, k;

	for (i = 0; i < 3; i++) {
		for (k = 0; k < 9; k++) {
			printf("‚Æ‚ñ‚Å ");
		}
		for (j = 0; j < 3; j++) {
			printf("‚Ü‚í‚Á‚Ä ");
		}
		printf("‚Ü‚í‚é\n");
	}

	return 0;
}
