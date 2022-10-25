#include "main.h"

/**
 * rev_string - reverses a string
 * @s: The string to be reversed
 */

void rev_string(char *s)
{
while (*s)
{
_putchar(*s--);
}
_putchar('\n');
}
