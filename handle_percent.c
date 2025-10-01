#include "main.h"
#include <stdarg.h>

int handle_percent(va_list args, char *buffer, int *buf_len)
{
    (void)args;
    buffer_char(buffer, buf_len, '%');
    return 1;
}
