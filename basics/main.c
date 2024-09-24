#include <stdio.h>

int main()
{
    // Ternary operator
    int a = 10, b = 20, c;
    c = (a > b) ? a : b;

    printf("The greater number is %d\n", c);    

    return 0;
}