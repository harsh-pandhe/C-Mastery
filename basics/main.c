#include <stdio.h>
#define SIZE 10
int main()
{
    struct Complex {
        double re;
        double im;
    } c;

    printf("%d\n", sizeof(struct Complex)); // 16

    struct _Books {
        char title[50];
        char author[50];
        int books_id;
    } Books;

    printf("%d\n", sizeof(struct _Books)); // 104

    struct Complex x = {1.0, 2.0};
    struct Complex y = {3.0};

    printf("%f %f \n", x.re, x.im);
    printf("%f %f \n", y.re, y.im);
    return 0;
}