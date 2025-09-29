#include "main.h"

#include <limits.h>
#include <stdio.h>

int main(void)
{
    long l = (long)INT_MAX + 1024;
    long m = (long)INT_MIN - 1024;

    _printf("%d\n", 1024);
    _printf("%d\n", -1024);
    _printf("%d\n", 0);
    _printf("%d\n", INT_MAX);
    _printf("%d\n", INT_MIN);
    _printf("%d\n", l);
    _printf("%d\n", m);

    _printf("There is %d bytes in %d KB\n", 1024, 1);
    _printf("%d - %d = %d\n", 1024, 2048, -1024);
    _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

    _printf("%i\n", 1024);
    _printf("%i\n", -1024);
    _printf("%i\n", 0);
    _printf("%i\n", INT_MAX);
    _printf("%i\n", INT_MIN);
    _printf("%i\n", l);
    _printf("%i\n", m);

    return (0);
}
