#include "main.h"

int print_char(va_list ap)
{
    char c = (char)va_arg(ap, int);
    return _putchar(c);
}

int print_percent(va_list ap)
{
    (void)ap;
    return _putchar('%');
}
