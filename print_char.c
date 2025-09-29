#include "main.h"

/**
 * print_char - prints a character
 * @ap: argument list
 * Return: number of characters printed
 */
int print_char(va_list ap)
{
 char c = (char)va_arg(ap, int);

 return (_putchar(c));
}

/**
 * print_percent - prints a percent sign
 * @ap: argument list (unused)
 * Return: number of characters printed
 */
int print_percent(va_list ap)
{
 (void)ap;
 return (_putchar('%'));
}
