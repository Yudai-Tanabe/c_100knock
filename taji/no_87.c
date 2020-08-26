#include<stdio.h>

int main(void) {
	int d;
	int d1, d2, d3, d4, d5, d6, d7, d8;

	printf("’a¶“ú‚ğYYYYMMDD‚ÌŒ`®‚Å“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
	scanf("%d", &d);

	while (10 <= d) {

		printf("%d\n", d);

		d1 = d % 10;
		d2 = ((d - d1) % 100) / 10;
		d3 = ((d - d1 - d2) % 1000) / 100;
		d4 = ((d - d1 - d2 - d3) % 10000) / 1000;
		d5 = ((d - d1 - d2 - d3 - d4) % 100000) / 10000;
		d6 = ((d - d1 - d2 - d3 - d4 - d5) % 1000000) / 100000;
		d7 = ((d - d1 - d2 - d3 - d4 - d5 - d6) % 10000000) / 1000000;
		d8 = ((d - d1 - d2 - d3 - d4 - d5 - d6 - d7) % 100000000) / 10000000;



		printf("%d\n", d1);
		printf("%d\n", d2);
		printf("%d\n", d3);
		printf("%d\n", d4);
		printf("%d\n", d5);
		printf("%d\n", d6);
		printf("%d\n", d7);
		printf("%d\n", d8);

		printf("\n");

		d = d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8;
	}

	printf("‰^–½”‚Í%d\n", d);

	return 0;
}