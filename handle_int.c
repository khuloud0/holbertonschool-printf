#include "main.h"

/**
* print_int - Prints an integer
* @args: List of variadic arguments
* Return: Number of characters printed
*/
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;
	char buffer[12];
	int i = 0;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		write(1, "0", 1);
		return (count + 1);
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	while (i--)
	{
		write(1, &buffer[i], 1);
		count++;
	}

	return (count);
}
