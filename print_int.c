#include "main.h"

/**
 * print_unsigned_decimal - prints an unsigned number
 * @n: number to print
 * Return: number of characters printed
 */
static int print_unsigned_decimal(unsigned long n)
{
	char buf[20];
	int i = 0;
	int count = 0;

	if (n == 0)
		return (_putchar('0'));

	while (n > 0)
	{
		buf[i++] = (n % 10) + '0';
		n /= 10;
	}

	while (i > 0)
	{
		i--;
		count += _putchar(buf[i]);
	}

	return (count);
}

/**
 * print_int - prints an integer
 * @ap: argument list
 * Return: number of characters printed
 */
int print_int(va_list ap)
{
	long n = va_arg(ap, int);
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	count += print_unsigned_decimal((unsigned long)n);

	return (count);
}
