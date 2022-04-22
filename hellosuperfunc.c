#include <stdio.h>
#include "hellofunc.h"

void myPrintSuperHello(hello_t helloparam)
{
    printf("\033[0;31m"); //Set the text to the color red
    
    myPrintHello(helloparam);
    
    printf("\033[0m"); //Resets the text to default color
}
