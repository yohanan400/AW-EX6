#include <stdio.h>
#include "EX6-2.h"

void CharPrintHex(char *var , int sizeOf)
{	
    char* p = var;

    printf("a =");
    for (int i = 0; i < sizeOf; ++i)
    {
        printf("%2hhx,", p[i]);
        printf("\n");
    }
}

void IntPrintHex(int* var, int sizeOf)
{
    int* p = var;

    printf("a =");
    for (int i = 0; i < sizeOf; ++i)
    {
        printf("%2hhx,", p[i]);
        printf("\n");
    }
}