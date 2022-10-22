#include "main.h"

/**
 * print_number - prints a given integer
 * @n: numbers to spring
 * Return: void
 */

void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
_putchar('-');
num = -num;
}
if ((n / 10) > 0)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}
