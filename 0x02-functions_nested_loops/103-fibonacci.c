#include <stdio.h>

int main(void)
{
    long long int a = 1, b = 2, c, sum = 0;

    while (b <= 4000000)
    {
        if (b % 2 == 0)
            sum += b;
        c = a + b;
        a = b;
        b = c;
    }
    printf("%lld\n", sum);
    return (0);
}

