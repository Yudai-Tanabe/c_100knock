#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int m, n, u, d, o, cnt;

	printf("�������: ");
	scanf("%d", &m);
	cnt = 1;
	n = 50;
	u = 100;
	d = 1;
	printf("%d�ł����H: ", n);
	scanf("%d", &o);

	while (o != 0) {

		if (o == 1) {
			d = n;
			n = n + ((u - n) / 2);
		}
		else {
			u = n;
			n = d + ((n - d) / 2);
		}
		cnt++;
		printf("%d�ł����H: ", n);
		scanf("%d", &o);
	}

	printf("����!! %d��ڂŃN���A\n", cnt);


	return 0;
}