#include<stdio.h>
int main(void)
{
	int x;
	int one, two, five;
	int exit = 0;
	scanf_s("%d", &x);
	for (one = 1; one < x * 10; one++) {
		for (two = 1; two < x * 10 / 2; two++) {
			for (five = 1; five < 10 * 10 / 5; five++) {
				if (one + two * 2 + five * 5 == x * 10) {
					printf("������%d��1�Ǽ�%d��2�Ǽ�%d��5�ǵõ�%dԪ\n", one, two, five, x);
					exit = 1;
					break;
				}
			}
			if (exit == 1)break;
		}
		if (exit == 1) break;
	}
	return 0;
}