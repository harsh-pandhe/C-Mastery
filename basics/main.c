#include <stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", arr[i]);
    }

    int a[] = {1, 2, 3, 4, 5};
    printf("%d\n", a[0]);

    int b[5] = {1, 2, 3, 4, 5};
    printf("%d\n", b[0]);

    b[5] = 6;
    printf("%d\n", b[5]);

    int z[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            z[i][j] = i + j;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", z[i][j]);
        }
        printf("\n");
    }
    return 0;
}