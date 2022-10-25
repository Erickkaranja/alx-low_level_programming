#include "main.h"

/**
 * print_rev - printsstring in reverse
 * @s: The sting to be reverses
 */

void print_rev(char *s)
{
int length = 0;

while (*s)
{
length++;
s++;
}
s--;
for (; length > 0 ; length--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
