#include <stdio.h>

int main()
{
    // Operators
    // Arithmetic operators

    int i = 100, j = 20, k;
    k = i + j;
    printf("Addition: %d\n", k);

    k = i - j;
    printf("Subtraction: %d\n", k);

    k = i * j;
    printf("Multiplication: %d\n", k);

    k = i / j;
    printf("Division: %d\n", k);

    k = i % j;
    printf("Modulus: %d\n", k);

    // Relational operators

    int a = 10, b = 20;
    if (a == b)
    {
        printf("a is equal to b\n");
    }
    else
    {
        printf("a is not equal to b\n");
    }

    if (a != b)
    {
        printf("a is not equal to b\n");
    }
    else
    {
        printf("a is equal to b\n");
    }

    if (a > b)
    {
        printf("a is greater than b\n");
    }
    else
    {
        printf("a is not greater than b\n");
    }

    if (a < b)
    {
        printf("a is less than b\n");
    }
    else
    {
        printf("a is not less than b\n");
    }

    if (a >= b)
    {
        printf("a is greater than or equal to b\n");
    }
    else
    {
        printf("a is not greater than or equal to b\n");
    }

    if (a <= b)
    {
        printf("a is less than or equal to b\n");
    }
    else
    {
        printf("a is not less than or equal to b\n");
    }

    // Logical operators

    int x = 1, y = 0;
    if (x && y)
    {
        printf("Both x and y are true\n");
    }
    else
    {
        printf("Either x or y is false\n");
    }

    if (x || y)
    {
        printf("Either x or y is true\n");
    }
    else
    {
        printf("Both x and y are false\n");
    }

    if (!x)
    {
        printf("x is false\n");
    }
    else
    {
        printf("x is true\n");
    }

    return 0;
}