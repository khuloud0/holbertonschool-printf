#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Buffer write helpers */
void flush_buffer(char *buffer, int *len);
void buffer_char(char *buffer, int *len, char c);

/* Handler function prototype update */
typedef struct format_specifier
{
    char specifier;
    int (*handler)(va_list args, char *buffer, int *buf_len);
} fmt_spec_t;

int _printf(const char *format, ...);

/* New handler function signatures */
int handle_char(va_list args, char *buffer, int *buf_len);
int handle_string(va_list args, char *buffer, int *buf_len);
int handle_percent(va_list args, char *buffer, int *buf_len);
int handle_int(va_list args, char *buffer, int *buf_len);
int handle_unsigned(va_list args, char *buffer, int *buf_len);
int handle_octal(va_list args, char *buffer, int *buf_len);
int handle_hex_lower(va_list args, char *buffer, int *buf_len);
int handle_hex_upper(va_list args, char *buffer, int *buf_len);

#endif
