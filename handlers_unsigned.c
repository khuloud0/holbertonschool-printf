#include "main.h"
#include <stdarg.h>

/**
 * handle_unsigned - handles %u
 */
int handle_unsigned(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    return print_unsigned(num, 10, 0);
}

/**
 * handle_octal - handles %o
 */
int handle_octal(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    return print_unsigned(num, 8, 0);
}

/**
 * handle_hex_lower - handles %x
 */
int handle_hex_lower(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    return print_unsigned(num, 16, 0);
}

/**
 * handle_hex_upper - handles %X
 */
int handle_hex_upper(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    return print_unsigned(num, 16, 1);
}
