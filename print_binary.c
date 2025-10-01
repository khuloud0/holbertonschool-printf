#include "main.h"

int print_binary(unsigned int n)
{
    int count = 0;
    unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
    int started = 0;

    for (; mask > 0; mask >>= 1)
    {
        if (n & mask)
        {
            count += _putchar('1');
            started = 1;
        }
        else if (started)
        {
            count += _putchar('0');
        }
    }
    if (count == 0)
        count += _putchar('0');

    return count;
}

