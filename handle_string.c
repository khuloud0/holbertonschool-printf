#include "main.h"
#include <stdarg.h>

int handle_string(va_list args, char *buffer, int *buf_len)
{
    char *str = va_arg(args, char *);

    if (!str)
        str = "(null)";

    int count = 0;
    while (*str)
    {
        buffer_char(buffer, buf_len, *str++);
        count++;
    }

    return count;
}
