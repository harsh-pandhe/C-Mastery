#include <stdio.h>
#define SIZE 10
int main()
{
    typedef union _Packet
    {
        int iData;
        double dData;
        char cData;
    } Packet;

    printf("Size of Packet: %d\n", sizeof(Packet));

    Packet p = {10};
    printf("p.iData: %d\n", p.iData);

    p.iData = 20;
    printf("iData:  %d\n", p.iData);

    p.dData = 30.0;
    printf("dData:  %lf\n", p.dData);

    p.cData = 'A';
    printf("cData:  %c\n", p.cData);

    p.iData = 40;
    printf("iData:  %d\n", p.iData);
    printf("dData:  %lf\n", p.dData);
    printf("cData:  %c\n", p.cData);

    return 0;
}