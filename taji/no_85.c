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

	printf("石の数を入力してください(10以上) :");
	scanf("%d", &num);


	while (1) {
		printf("石の数: %d\n", num);
		printf("プレイヤー１の番です\n");
		printf("何個取る(１〜３個)?");
		scanf("%d", &x);

		num = num - x;
		if (num <= 0) {
			res = 2;
			break;
		}

		printf("石の数: %d\n", num);
		printf("プレイヤー２の番です\n");
		printf("何個取る(１〜３個)?");
		scanf("%d", &y);

		num = num - y;
		if (num <= 0) {
			res = 1;
			break;
		}
	}

	if (res == 1) {
		printf("プレイヤー１の勝ち\n");
	}
	else if (res == 2) {
		printf("プレイヤー２の勝ち\n");
	}
	return 0;
}