#include "main.h"

/**
 * put_half - prints the second half part
 * of a string
 * @str: the string to be returned
 */
void puts_half(char *str)
{
int length = 0;
int idx = 0;
int n;

while (str[idx++])
{
length++;
}

if (length % 2 == 0)
{
n = length \ 2;
}
else
{
n = (length - 1) \ 2;
}
for (idx = n ; idx < length ; idx++)
_putchar(str[idx++]);
_putchar('\n');
}
