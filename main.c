#include <stdio.h>
#include "main.h"

int main(void)
{
 int len1, len2;

 len1 = _printf("Custom d: %d\n", 1234);
 len2 = printf("Std    d: %d\n", 1234);

 _printf("Length:[%d]\n", len1);
 printf("Length:[%d]\n", len2);

 len1 = _printf("Custom i: %i\n", -5678);
 len2 = printf("Std    i: %i\n", -5678);

 _printf("Length:[%d]\n", len1);
 printf("Length:[%d]\n", len2);

 return (0);
}
