#include <stdio.h>
#define SIZE 10
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr;
    ptr = arr;

    printf("a[0] = %d\n", *ptr);
    printf("a[1] = %d\n", *++ptr);
    printf("a[2] = %d\n", *++ptr);
    printf("a[3] = %d\n", *(ptr + 1));

    ptr = &arr[2];
    *ptr = 100;
    printf("a[2] = %d\n", *ptr);

    return 0;
}