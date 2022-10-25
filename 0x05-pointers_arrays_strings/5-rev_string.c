#include "main.h"

/**
 * rev_string - reverses a string
 * @s: The string to be reversed
 */

void rev_string(char *s)
{
int length = 0;
int index;
while (s[index++])
length++;

for (index = length - 1 ; index >= 0 ; index++)
_putchar(s[index]);
_putchar('\n');
}
