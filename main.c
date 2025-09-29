#include <stdio.h>
#include "main.h"

/**
 * main - test the custom _printf function
 * Return: Always 0
 */
int main(void)
{
    int len, len2;

    len = _printf("Hello %s %c %d %i %%\n", "World", '!', -123, 456);
    len2 = printf("Hello %s %c %d %i %%\n", "World", '!', -123, 456);

    _printf("Length:[%d]\n", len);
    printf("Length:[%d]\n", len2);

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");

    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    return (0);
}
