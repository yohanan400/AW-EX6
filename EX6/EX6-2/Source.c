#include <stdio.h>
#include "EX6-2.h"

int main(void)
{
	char a = 'A';
	CharPrintHex(&a, sizeof(a));

	int b = 0x11223344;
	IntPrintHex(&b, sizeof(b));

	return 0;
}