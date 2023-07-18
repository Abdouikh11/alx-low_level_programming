#include <stdio.h>

int main(void)
{
    int i;
    long long int fib[50];

    fib[0] = 1;
    fib[1] = 2;
    printf("%lld, %lld", fib[0], fib[1]);

    for (i = 2; i < 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf(", %lld", fib[i]);
    }
    printf("\n");
    return (0);
}
