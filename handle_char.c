#include "main.h"
#include <stdarg.h>

int handle_char(va_list args, char *buffer, int *buf_len)
{
    char c = (char)va_arg(args, int);
    buffer_char(buffer, buf_len, c);
    return 1;
}
