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

	printf("石の数を入力してください(10以上) :");
	scanf("%d", &num);

	if (f == 0) {
		printf("ではわたしから\n");

		while (1) {
			printf("石の数: %d\n", num);
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
			printf("%d個取ります\n", y);

			num = num - y;
			if (num <= 0) {
				res = 1;
				break;
			}
			printf("石の数: %d\n", num);
			printf("何個取る(１〜３個)?");
			scanf("%d", &x);

			num = num - x;
			if (num <= 0) {
				res = 2;
				break;
			}
		}
	}
	else if (f == 1) {
		printf("あなたからどうぞ\n");

		while (1) {
			printf("石の数: %d\n", num);
			printf("何個取る(１〜３個)?");
			scanf("%d", &x);

			num = num - x;
			if (num <= 0) {
				res = 2;
				break;
			}

			printf("石の数: %d\n", num);
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
			printf("%d個取ります\n", y);

			num = num - y;
			if (num <= 0) {
				res = 1;
				break;
			}
		}
	}



	if (res == 1) {
		printf("プレイヤーの勝ち\n");
	}
	else if (res == 2) {
		printf("コンピュータの勝ち\n");
	}
	return 0;
}