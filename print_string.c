#include "main.h"

int print_string(va_list ap)
{
    char *s = va_arg(ap, char *);
    int count = 0;

    if (!s)
        s = "(null)";

    while (*s)
    {
        count += _putchar(*s);
        s++;
    }
    return count;
}
