#include<stdio.h>
int main(void)
{
	int num, time, guess;
	int guess_time = 0;
	scanf_s("%d %d", &num, &time);
	while (1)
	{
		scanf_s("%d", &guess);
		guess_time++;
		if ((guess_time >= time) || (guess < 0 && guess_time <= time))
		{
			printf("Game Over\n");
			return 0;
		}
		if (guess > num) {
			printf("Too,big\n");
		}
		if (guess < num) {
			printf("Too,small\n");
		}
		if (guess == num)
		{
			if (guess_time == 1)
				printf("Bingo!\n");
			else if (guess_time <= 3)
				printf("Lucky You!\n");
			else printf("Good Guess!\n");
			return 0;
		}

	}
}
/*
#include <stdio.h>

int main(void) {
    int number, times, guesstimes = 0;

    scanf("%d %d", &number, &times);

    int guess;

    while (1) {
        scanf("%d", &guess);
        guesstimes++;
        if ((guesstimes > times) || (guess < 0 && guesstimes <= times)) {
            printf("Game Over\n");

            return 0;
        }
        if (guess > number) {
            printf("Too big\n");
        }
        if (guess < number) {
            printf("Too small\n");
        }
        if (guess == number) {
            if (guesstimes == 1) {
                printf("Bingo!\n");
            }
            else if (guesstimes <= 3) {
                printf("Lucky You!\n");
            }
            else {
                printf("Good Guess!\n");
            }

            return 0;
        }
    }

}
*/
