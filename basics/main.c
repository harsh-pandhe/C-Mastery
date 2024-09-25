#include <stdio.h>
#include <math.h>

int main()
{
    int i, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &i);

    for (int j = 0; j <= i; j++)
    {
        sum = sum + j;
    }

    printf("Sum of all Natural Numbers: %d", sum);
    return 0;
}