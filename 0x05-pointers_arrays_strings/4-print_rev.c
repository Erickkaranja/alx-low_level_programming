#include "main.h"

/**
 * print_rev - printsstring in reverse
 * @s: The sting to be reverses
 */

void print_rev(char *s)
{
int length = 0;
int index;

while (s[index++])
length++;

for (index = length - 1 ; index >= 0 ; index--)

_putchar(s[index]);

_putchar('\n');
}
