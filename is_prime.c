#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;

}
int main()
{
    int n;
    scanf_s("%d", &n);
    int i;
    n++;
    while (1)
    {
        if (prime(n))
            break;
        n++;
    }
    printf("%d\n", n);
    return 0;
}