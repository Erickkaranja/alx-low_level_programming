#include "main.h"
/**
 * more_numbers - prints 10 times number 0 - 14
 */
void more_numbers(void)
{
int i;
int n;

for (i = 0 ; i <= 9 ; i++)
{
for (n = 0 ; n <= 14 ; n++)
{
if (n > 9)
_putchar(1 + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
