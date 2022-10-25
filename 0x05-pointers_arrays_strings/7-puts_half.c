#include "main.h"

/**
 * puts_half - prints the second half part
 * of a string
 * @str: the string to be returned
 */
void puts_half(char *str)
{
int length = 0;
char *ch = str;
int n;

while (*ch != '0')
{
length++;
ch++;
}

if (length % 2 == 0)
{
n = length / 2;
}
else
{
n = (length + 1) / 2;
}
for (; n < length ; n++)
{
_putchar(*(str + n));
}
_putchar('\n');
}
