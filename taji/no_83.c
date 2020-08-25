#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int myte, cpte, res, mysc, cpsc;
	int i = 0;
	mysc = 0;
	cpsc = 0;

	while (i < 5) {

		cpte = rand() % 3;
		printf("あなたの手を選んでください(グー０、チョキ１、パー２): ");
		scanf("%d", &myte);
		printf("\n");

		switch (myte) {
		case 0:
			printf("グー");
			break;
		case 1:
			printf("チョキ");
			break;
		case 2:
			printf("パー");
			break;
		}
		printf("\n");

		switch (cpte) {
		case 0:
			printf("コンピュータはグー");
			break;
		case 1:
			printf("コンピュータはチョキ");
			break;
		case 2:
			printf("コンピュータはパー");
			break;
		}
		printf("\n\n");


		if ((myte - cpte) == (-1)
			|| (myte - cpte) == 2) {
			res = 0;
		}
		else if (myte == cpte) {
			res = 1;
		}
		else {
			if (myte < 0 || 2 < myte) {
				res = 3;
			}
			else {
				res = 2;
			}
		}

		switch (res) {
		case 0:
			printf("あなたの勝ち\n");
			mysc++;
			i++;
			printf("あなた%d勝、わたし%d勝\n", mysc, cpsc);
			break;
		case 1:
			printf("あいこ\n");
			printf("あなた%d勝、わたし%d勝\n", mysc, cpsc);
			break;
		case 2:
			printf("あなたの負け\n");
			cpsc++;
			i++;
			printf("あなた%d勝、わたし%d勝\n", mysc, cpsc);
			break;
		}
		printf("\n");
	}
	
	if (cpsc < mysc) {
		printf("あなたの総合勝利です。参りました。\n");
	}
	else {
		printf("わたしの総合優勝です。\n");
	}


	return 0;
}
