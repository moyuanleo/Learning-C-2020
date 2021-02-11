/*
 * @Author: your name
 * @Date: 2020-12-19 11:06:10
 * @LastEditTime: 2021-02-11 14:16:51
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \undefinedc:\Users\leo\Documents\C\2020\daffodil\daffodil.c
 */
#include<stdio.h>
#include<math.h>

int g(int p, int n)
{
	int pw = p;
	int i;
	for (i = 2; i <= n; i++)
		pw =* p;
	return pw;
}
int f(int n, int count)
{
	int sum = 0;
	int temp = n;
	while (n != 0 && sum<temp) {
		sum += g(n % 10, count);
		n /= 10;
	}
	if (sum == temp && n == 0)
		return 1;
	return 0;
}
int main()
{
	int n;
	scanf_s("%d", &n);
	int i;
	int start = g(10, n - 1);
	int end = g(10, n);
	for (i = start; i < end; i++) {
		if (f(i, n))
			printf("%d\n", i);
	}
	return 0;
}