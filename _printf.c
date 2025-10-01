#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * flush_buffer - writes buffer to stdout and resets index
 * @buffer: the character buffer
 * @len: number of characters to write
 */
void flush_buffer(char *buffer, int *len)
{
    write(1, buffer, *len);
    *len = 0;
}

/**
 * buffer_char - adds a character to the buffer and flushes if full
 * @buffer: character buffer
 * @len: pointer to current index in buffer
 * @c: character to add
 */
void buffer_char(char *buffer, int *len, char c)
{
    if (*len >= 1024)
        flush_buffer(buffer, len);

    buffer[(*len)++] = c;
}

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, j, count = 0, buf_len = 0;
    char buffer[1024];
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
        return (-1);

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            j = 0;
            while (specifiers[j].specifier)
            {
                if (format[i] == specifiers[j].specifier)
                {
                    count += specifiers[j].handler(args, buffer, &buf_len);
                    break;
                }
                j++;
            }
            if (!specifiers[j].specifier)
            {
                buffer_char(buffer, &buf_len, '%');
                buffer_char(buffer, &buf_len, format[i]);
                count += 2;
            }
        }
        else
        {
            buffer_char(buffer, &buf_len, format[i]);
            count++;
        }
        i++;
    }

    flush_buffer(buffer, &buf_len);
    va_end(args);
    return count;
}
