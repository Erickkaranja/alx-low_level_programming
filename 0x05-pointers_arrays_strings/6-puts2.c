#include "main.h"

/**
 * puts2 - prints everother character of
 * a string.
 * @str: the string of print.
 */

void puts2(char *str)
{
int indx = 0;
int length = 0;

while (str[indx++])
{
length++;
}
for (indx = 0 ; indx < length ; indx += 2)
_putchar(str[indx]);
_putchar('\n');
}
