#include <stdio.h>

int funct(int a, int b)
{
    return a + b;
}

unsigned int factorial(unsigned int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int c = funct(5, 6);
    printf("%d\n", c);

    unsigned int n = 5;
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}