#include "main.h"

/**
 * print_unsigned - prints an unsigned int in a given base
 * @num: the number to print
 * @base: the base to convert to (8, 10, 16)
 * @uppercase: 1 for uppercase hex, 0 for lowercase or other bases
 * Return: number of characters printed
 */
int print_unsigned(unsigned int num, int base, int uppercase)
{
    char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    char buffer[32];
    int i = 0, count = 0;

    if (num == 0)
        return _putchar('0');

    while (num > 0)
    {
        buffer[i++] = digits[num % base];
        num /= base;
    }

    while (i--)
        count += _putchar(buffer[i]);

    return count;
}
