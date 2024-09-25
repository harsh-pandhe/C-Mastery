#include <stdio.h>
#define SIZE 10
int main()
{
    int i = 10;
    int *ip;
    ip = &i;

    printf("Value of i: %d\n", i);
    printf("Address of i: %p\n", &i);

    printf("Value of ip: %p\n", ip);
    printf("Address of ip: %p\n", &ip);

    printf("Value of *ip: %d\n", *ip);
    
    return 0;
}