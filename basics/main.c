#include <stdio.h>
#include <math.h>

int main()
{
    double x;

    printf("Enter a number: ");
    scanf("%lf", &x);

    double sqrt_x = sqrt(x);
    printf("Square Root of %.2lf is: %.2lf", x, sqrt_x);
    return 0;
}