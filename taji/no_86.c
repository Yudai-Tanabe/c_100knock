#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int num;
	int x, y, f;
	int res;
	unsigned int now = (unsigned int)time(0);
	srand(now);
	y = 0;

	f = rand() % 2;

	printf("Î‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(10ˆÈã) :");
	scanf("%d", &num);

	if (f == 0) {
		printf("‚Å‚Í‚í‚½‚µ‚©‚ç\n");

		while (1) {
			printf("Î‚Ì”: %d\n", num);
			if (8 < num) {
				y = rand() % 3 + 1;
			}
			switch (num) {
			case 8:
				y = 3;
				break;
			case 7:
				y = 2;
				break;
			case 6:
				y = 1;
				break;
			case 5:
				y = 1;
				break;
			case 4:
				y = 3;
				break;
			case 3:
				y = 2;
				break;
			case 2:
				y = 1;
				break;
			case 1:
				y = 1;
				break;
			}
			printf("%dŒÂæ‚è‚Ü‚·\n", y);

			num = num - y;
			if (num <= 0) {
				res = 1;
				break;
			}
			printf("Î‚Ì”: %d\n", num);
			printf("‰½ŒÂæ‚é(‚P`‚RŒÂ)?");
			scanf("%d", &x);

			num = num - x;
			if (num <= 0) {
				res = 2;
				break;
			}
		}
	}
	else if (f == 1) {
		printf("‚ ‚È‚½‚©‚ç‚Ç‚¤‚¼\n");

		while (1) {
			printf("Î‚Ì”: %d\n", num);
			printf("‰½ŒÂæ‚é(‚P`‚RŒÂ)?");
			scanf("%d", &x);

			num = num - x;
			if (num <= 0) {
				res = 2;
				break;
			}

			printf("Î‚Ì”: %d\n", num);
			if (8 < num) {
				y = rand() % 3 + 1;
			}
			switch (num) {
			case 8:
				y = 3;
				break;
			case 7:
				y = 2;
				break;
			case 6:
				y = 1;
				break;
			case 5:
				y = 1;
				break;
			case 4:
				y = 3;
				break;
			case 3:
				y = 2;
				break;
			case 2:
				y = 1;
				break;
			case 1:
				y = 1;
				break;
			}
			printf("%dŒÂæ‚è‚Ü‚·\n", y);

			num = num - y;
			if (num <= 0) {
				res = 1;
				break;
			}
		}
	}



	if (res == 1) {
		printf("ƒvƒŒƒCƒ„[‚ÌŸ‚¿\n");
	}
	else if (res == 2) {
		printf("ƒRƒ“ƒsƒ…[ƒ^‚ÌŸ‚¿\n");
	}
	return 0;
}