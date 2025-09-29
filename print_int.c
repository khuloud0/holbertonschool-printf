#include "main.h"

static int print_unsigned_decimal(unsigned long n)
{
    char buf[20];
    int i = 0;
    int count = 0;

    if (n == 0)
        return _putchar('0');

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
    return count;
}

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
    return count;
}
