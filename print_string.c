#include "main.h"

/**
 * print_string - prints a string
 * @ap: argument list
 * Return: number of characters printed
 */
int print_string(va_list ap)
{
 char *s = va_arg(ap, char *);
 int count = 0;

 if (!s)
  s = "(null)";

 while (*s)
 {
  count += _putchar(*s);
  s++;
 }

 return (count);
}
