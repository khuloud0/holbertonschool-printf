#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int print_unsigned(unsigned int num, int base, int uppercase);

/* Handler functions */
int handle_char(va_list args);
int handle_string(va_list args);
int handle_percent(va_list args);
int handle_int(va_list args);
int handle_unsigned(va_list args);
int handle_octal(va_list args);
int handle_hex_lower(va_list args);
int handle_hex_upper(va_list args);

/* Struct for specifiers */
typedef struct format_specifier
{
    char specifier;
    int (*handler)(va_list);
} fmt_spec_t;

#endif
