#include "main.h"

/**
 * print_rev - printsstring in reverse
 * @s: The sting to be reverses
 */

void print_rev(char *s)
{
while (*s)
{
_putchar(*s--);
}
_putchar('\n');
}
