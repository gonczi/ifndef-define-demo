#include <stdio.h>
#include "hellofunc.h"

void myPrintHello(hello_t helloparam)
{
    switch (helloparam)
    {
        case HELLO_ONE:
            printf("myPrintHello: HELLO_ONE\n");
            break;
        case HELLO_TWO:
            printf("myPrintHello: HELLO_TWO\n");
            break;
        default:
            printf("myPrintHello: ???\n");
            break;
    }

    return;
}
