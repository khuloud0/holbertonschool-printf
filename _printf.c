#include "main.h"

int _printf(const char *format, ...)
{
    va_list ap;
    int i = 0;
    int count = 0;
    int k;
    int handled;

    spec_t table[] = {
        {'c', print_char}, {'s', print_string},
        {'%', print_percent}, {'d', print_int},
        {'i', print_int}, {'\0', NULL}
    };

    if (!format)
        return -1;

    va_start(ap, format);
    while (format[i])
    {
        if (format[i] != '%')
        {
            count += _putchar(format[i]);
            i++;
            continue;
        }

        i++;
        if (!format[i])
        {
            va_end(ap);
            return -1;
        }

        k = 0;
        handled = 0;

        while (table[k].sp)
        {
            if (table[k].sp == format[i])
            {
                count += table[k].func(ap);
                handled = 1;
                break;
            }
            k++;
        }

        if (!handled)
        {
            count += _putchar('%');
            count += _putchar(format[i]);
        }
        i++;
    }
    va_end(ap);
    return count;
}
