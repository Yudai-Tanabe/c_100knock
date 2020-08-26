#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int num;
	int x, y;
	int res;
	unsigned int now = (unsigned int)time(0);
	srand(now);

	rand() % 10;

	printf("Î‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(10ˆÈã) :");
	scanf("%d", &num);


	while (1) {
		printf("Î‚Ì”: %d\n", num);
		printf("ƒvƒŒƒCƒ„[‚P‚Ì”Ô‚Å‚·\n");
		printf("‰½ŒÂæ‚é(‚P`‚RŒÂ)?");
		scanf("%d", &x);

		num = num - x;
		if (num <= 0) {
			res = 2;
			break;
		}

		printf("Î‚Ì”: %d\n", num);
		printf("ƒvƒŒƒCƒ„[‚Q‚Ì”Ô‚Å‚·\n");
		printf("‰½ŒÂæ‚é(‚P`‚RŒÂ)?");
		scanf("%d", &y);

		num = num - y;
		if (num <= 0) {
			res = 1;
			break;
		}
	}

	if (res == 1) {
		printf("ƒvƒŒƒCƒ„[‚P‚ÌŸ‚¿\n");
	}
	else if (res == 2) {
		printf("ƒvƒŒƒCƒ„[‚Q‚ÌŸ‚¿\n");
	}
	return 0;
}