#include "main.h"

/**
 * print_number - prints a given integer
 * @n: numbers to spring
 * Return: void
 */

void print_number(int n)
{
unsigned int i, j, count;

if (n < 0)
{
	putchar(45);
	i = -n;
}
else
{
	i = n;
}
j = i;
count = 1;
while (j > 9)
{
j /= 10;
count *= 10;
}
for (; count >= 1 ; count /= 10)
{
putchar(n / count % 10 + '0');
}
}
