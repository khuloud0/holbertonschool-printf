#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, count = 0;
fmt_spec_t specifiers[] = {
    {'c', handle_char},
    {'s', handle_string},
    {'%', handle_percent},
    {'d', handle_int},
    {'i', handle_int},
    {'u', handle_unsigned},
    {'o', handle_octal},
    {'x', handle_hex_lower},
    {'X', handle_hex_upper},
    {'\0', NULL}
};

    if (!format)
        return -1;

    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (!format[i])
                break;

            if (format[i] == 'b')
                count += print_binary(va_arg(args, unsigned int));
            else if (format[i] == '%')
                count += _putchar('%');
            else
            {
                count += _putchar('%');
                count += _putchar(format[i]);
            }
        }
        else
        {
            count += _putchar(format[i]);
        }
        i++;
    }

    va_end(args);
    return count;
}
