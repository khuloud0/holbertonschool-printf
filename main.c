#include "main.h"
#include <stdio.h>

int main(void)
{
    _printf("Unsigned: %u\n", 12345);
    _printf("Octal: %o\n", 12345);
    _printf("Hex lower: %x\n", 12345);
    _printf("Hex upper: %X\n", 12345);
    return 0;
}
