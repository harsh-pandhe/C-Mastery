#include <stdio.h>
#define SIZE 10
int main()
{
    struct Complex
    {
        double real;
        double imag;
    } c = {0.0, 1.0};

    printf("Size of Complex: %d\n", sizeof(c));
    printf("Real: %f, Imag: %f\n", c.real, c.imag);
    struct Complex *p = &c;
    (*p).real = 1.0;
    p->imag = 2.0;

    printf("Real: %f, Imag: %f\n", c.real, c.imag);

    return 0;
}